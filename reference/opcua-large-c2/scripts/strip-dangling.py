"""Strip dangling references and problematic UAVariable nodes from
NodeSet2 XML so open62541's nodeset_compiler can generate C.

Two-pass:
  Pass 1: identify UAVariable nodes with custom-DataType + a Value child.
          These get dropped.
  Pass 2: drop any <Reference> whose target/type is undefined OR points
          at a node we just dropped.

Usage: strip-dangling.py <existing.xml>... -- <main.xml> > out.xml
"""
import sys, re, lxml.etree as ET

NS = {"u": "http://opcfoundation.org/UA/2011/03/UANodeSet.xsd"}

sep = sys.argv.index("--")
existing = sys.argv[1:sep]
main = sys.argv[sep+1]

known = set()
known_alias = {}

def parse_local(tree):
    ns_uris_el = tree.find("u:NamespaceUris", NS)
    local = ["http://opcfoundation.org/UA/"]
    if ns_uris_el is not None:
        for u in ns_uris_el.findall("u:Uri", NS):
            local.append(u.text.strip())
    return local

def harvest(path):
    tree = ET.parse(path)
    local = parse_local(tree)
    aliases_el = tree.find("u:Aliases", NS)
    if aliases_el is not None:
        for a in aliases_el.findall("u:Alias", NS):
            known_alias[a.get("Alias")] = a.text.strip()
    for n in tree.getroot():
        nid = n.get("NodeId")
        if not nid: continue
        m = re.match(r"(?:ns=(\d+);)?(.+)", nid)
        local_idx = int(m.group(1)) if m.group(1) else 0
        rest = m.group(2)
        if local_idx >= len(local): continue
        known.add((local[local_idx], rest))

for p in existing:
    harvest(p)
harvest(main)

def resolve(target_text, file_local):
    if not target_text: return None
    t = target_text.strip()
    if t in known_alias: t = known_alias[t]
    m = re.match(r"(?:ns=(\d+);)?(.+)", t)
    local_idx = int(m.group(1)) if m.group(1) else 0
    rest = m.group(2)
    if local_idx >= len(file_local): return None
    return (file_local[local_idx], rest)

def datatype_is_custom(dt_text, file_local):
    if not dt_text: return False
    r = resolve(dt_text, file_local)
    if r is None: return True
    if r[0] != "http://opcfoundation.org/UA/":
        return True
    # OPC UA core abstract Structure (ns=0;i=22) is also problematic:
    # the nodeset_compiler emits ``UA_Structure`` for the Value but no
    # runtime type with that name exists in open62541. Treat as custom.
    if r[1] in ("i=22", "Structure"):
        return True
    return False

# Process main.
tree = ET.parse(main)
local = parse_local(tree)
root = tree.getroot()

# Pass 1: drop UAVariables with custom DataType + Value.
dropped_vars = set()
dropped_var_count = 0
for n in list(root):
    if n.tag.endswith("UAVariable"):
        dt = n.get("DataType", "")
        if datatype_is_custom(dt, local) and n.find("u:Value", NS) is not None:
            r = resolve(n.get("NodeId"), local)
            if r is not None: dropped_vars.add(r)
            root.remove(n); dropped_var_count += 1

# Update known set: removed nodes are no longer "known" targets.
for d in dropped_vars:
    known.discard(d)

# Pass 2: drop refs to undefined / dropped targets and unknown ref types.
dropped_target = 0
dropped_type = 0
for n in list(root):
    refs = n.find("u:References", NS)
    if refs is None: continue
    for r in list(refs):
        target = (r.text or "").strip()
        ref_type = r.get("ReferenceType", "")
        rt = resolve(target, local)
        if rt is None or rt not in known:
            refs.remove(r); dropped_target += 1; continue
        if ref_type:
            rt2 = resolve(ref_type, local)
            if rt2 is None or rt2 not in known:
                refs.remove(r); dropped_type += 1

sys.stderr.write(f"Dropped {dropped_target} dangling targets, {dropped_type} unknown ref types, {dropped_var_count} custom-DataType UAVariables from {main}\n")
tree.write(sys.stdout.buffer, encoding="utf-8", xml_declaration=True)
