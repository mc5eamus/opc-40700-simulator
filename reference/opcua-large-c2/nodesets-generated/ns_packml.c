/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "ns_packml.h"


/* HasWarning - ns=2;i=24 */

static UA_StatusCode function_ns_packml_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "WarningFor");
attr.displayName = UA_LOCALIZEDTEXT("", "HasWarning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 24LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "HasWarning"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 24LU)
);
}

/* HasStopReason - ns=2;i=25 */

static UA_StatusCode function_ns_packml_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "StopReasonFor");
attr.displayName = UA_LOCALIZEDTEXT("", "HasStopReason");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 25LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "HasStopReason"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 25LU)
);
}

/* HasInterlock - ns=2;i=21 */

static UA_StatusCode function_ns_packml_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "InterlockFor");
attr.displayName = UA_LOCALIZEDTEXT("", "HasInterlock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 21LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "HasInterlock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 21LU)
);
}

/* HasAlarmHistory - ns=2;i=23 */

static UA_StatusCode function_ns_packml_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "AlarmHistoryFor");
attr.displayName = UA_LOCALIZEDTEXT("", "HasAlarmHistory");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 23LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "HasAlarmHistory"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 23LU)
);
}

/* HasAlarm - ns=2;i=22 */

static UA_StatusCode function_ns_packml_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "AlarmFor");
attr.displayName = UA_LOCALIZEDTEXT("", "HasAlarm");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 22LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "HasAlarm"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 22LU)
);
}

/* PackMLRemoteInterfaceDataType - ns=2;i=19 */

static UA_StatusCode function_ns_packml_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLRemoteInterfaceDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 19LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLRemoteInterfaceDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19LU)
);
}

/* Default XML - ns=2;i=84 */

static UA_StatusCode function_ns_packml_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 84LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 84LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 19LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 84LU)
);
}

/* Default Binary - ns=2;i=83 */

static UA_StatusCode function_ns_packml_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 83LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 83LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 19LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 83LU)
);
}

/* PackMLProductDataType - ns=2;i=18 */

static UA_StatusCode function_ns_packml_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLProductDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 18LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLProductDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18LU)
);
}

/* Default XML - ns=2;i=82 */

static UA_StatusCode function_ns_packml_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 82LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 82LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 18LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 82LU)
);
}

/* Default Binary - ns=2;i=81 */

static UA_StatusCode function_ns_packml_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 81LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 81LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 18LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 81LU)
);
}

/* PackMLIngredientsDataType - ns=2;i=17 */

static UA_StatusCode function_ns_packml_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLIngredientsDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 17LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLIngredientsDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17LU)
);
}

/* Default XML - ns=2;i=80 */

static UA_StatusCode function_ns_packml_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 80LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 80LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 17LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 80LU)
);
}

/* Default Binary - ns=2;i=79 */

static UA_StatusCode function_ns_packml_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 79LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 79LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 17LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 79LU)
);
}

/* PackMLDescriptorDataType - ns=2;i=16 */

static UA_StatusCode function_ns_packml_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLDescriptorDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 16LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLDescriptorDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16LU)
);
}

/* Default XML - ns=2;i=78 */

static UA_StatusCode function_ns_packml_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 78LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 78LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 16LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 78LU)
);
}

/* Default Binary - ns=2;i=77 */

static UA_StatusCode function_ns_packml_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 77LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 77LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 16LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 77LU)
);
}

/* PackMLCountDataType - ns=2;i=14 */

static UA_StatusCode function_ns_packml_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLCountDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 14LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLCountDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 14LU)
);
}

/* Default XML - ns=2;i=70 */

static UA_StatusCode function_ns_packml_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 70LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 70LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 14LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 70LU)
);
}

/* Default Binary - ns=2;i=69 */

static UA_StatusCode function_ns_packml_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 69LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 69LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 14LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 69LU)
);
}

/* PackMLAlarmDataType - ns=2;i=15 */

static UA_StatusCode function_ns_packml_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLAlarmDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 15LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLAlarmDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15LU)
);
}

/* Default XML - ns=2;i=76 */

static UA_StatusCode function_ns_packml_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 76LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 76LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 15LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 76LU)
);
}

/* Default Binary - ns=2;i=74 */

static UA_StatusCode function_ns_packml_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 74LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 74LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 15LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 74LU)
);
}

/* ProductionMaintenanceModeEnum - ns=2;i=11 */

static UA_StatusCode function_ns_packml_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProductionMaintenanceModeEnum");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 11LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "ProductionMaintenanceModeEnum"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 11LU)
);
}

/* EnumValues - ns=2;i=194 */

static UA_StatusCode function_ns_packml_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 4;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7594LU);
UA_EnumValueType variablenode_ns_2_i_194_variant_DataContents[4];

UA_init(&variablenode_ns_2_i_194_variant_DataContents[0], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_2_i_194_variant_DataContents[0].value = (UA_Int64) 0;
variablenode_ns_2_i_194_variant_DataContents[0].displayName = UA_LOCALIZEDTEXT("", "");
variablenode_ns_2_i_194_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_194_variant_DataContents[1], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_2_i_194_variant_DataContents[1].value = (UA_Int64) 1;
variablenode_ns_2_i_194_variant_DataContents[1].displayName = UA_LOCALIZEDTEXT("", "");
variablenode_ns_2_i_194_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_194_variant_DataContents[2], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_2_i_194_variant_DataContents[2].value = (UA_Int64) 2;
variablenode_ns_2_i_194_variant_DataContents[2].displayName = UA_LOCALIZEDTEXT("", "");
variablenode_ns_2_i_194_variant_DataContents[2].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_194_variant_DataContents[3], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_2_i_194_variant_DataContents[3].value = (UA_Int64) 3;
variablenode_ns_2_i_194_variant_DataContents[3].displayName = UA_LOCALIZEDTEXT("", "");
variablenode_ns_2_i_194_variant_DataContents[3].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_194_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValues");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 194LU),
UA_NODEID_NUMERIC(ns[2], 11LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumValues"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;




retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 194LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 194LU)
);
}

/* http://opcfoundation.org/UA/PackML/ - ns=2;i=117 */

static UA_StatusCode function_ns_packml_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://opcfoundation.org/UA/PackML/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 117LU),
UA_NODEID_NUMERIC(ns[0], 11715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "http://opcfoundation.org/UA/PackML/"),
UA_NODEID_NUMERIC(ns[0], 11616LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 117LU)
);
}

/* StaticStringNodeIdPattern - ns=2;i=360 */

static UA_StatusCode function_ns_packml_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 360LU),
UA_NODEID_NUMERIC(ns[2], 117LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 360LU)
);
}

/* StaticNumericNodeIdRange - ns=2;i=359 */

static UA_StatusCode function_ns_packml_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 291LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 359LU),
UA_NODEID_NUMERIC(ns[2], 117LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 359LU)
);
}

/* StaticNodeIdTypes - ns=2;i=358 */

static UA_StatusCode function_ns_packml_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 358LU),
UA_NODEID_NUMERIC(ns[2], 117LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 358LU)
);
}

/* NamespaceVersion - ns=2;i=357 */

static UA_StatusCode function_ns_packml_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_357_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_357_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_357_variant_DataContents);
*variablenode_ns_2_i_357_variant_DataContents = UA_STRING_ALLOC("1.01");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_357_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 357LU),
UA_NODEID_NUMERIC(ns[2], 117LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_357_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ns_packml_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 357LU)
);
}

/* NamespaceUri - ns=2;i=356 */

static UA_StatusCode function_ns_packml_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_356_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_356_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_356_variant_DataContents);
*variablenode_ns_2_i_356_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/PackML/");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_356_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 356LU),
UA_NODEID_NUMERIC(ns[2], 117LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_356_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ns_packml_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 356LU)
);
}

/* NamespacePublicationDate - ns=2;i=355 */

static UA_StatusCode function_ns_packml_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
UA_DateTime *variablenode_ns_2_i_355_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_2_i_355_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_2_i_355_variant_DataContents);
*variablenode_ns_2_i_355_variant_DataContents = ( (UA_DateTime)(1602155280000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_355_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 355LU),
UA_NODEID_NUMERIC(ns[2], 117LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_DateTime_delete(variablenode_ns_2_i_355_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ns_packml_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 355LU)
);
}

/* IsNamespaceSubset - ns=2;i=354 */

static UA_StatusCode function_ns_packml_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_2_i_354_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_354_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_354_variant_DataContents);
*variablenode_ns_2_i_354_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_354_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 354LU),
UA_NODEID_NUMERIC(ns[2], 117LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_Boolean_delete(variablenode_ns_2_i_354_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ns_packml_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 354LU)
);
}

/* PackMLObjects - ns=2;i=72 */

static UA_StatusCode function_ns_packml_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLObjects");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 72LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[2], "PackMLObjects"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 72LU)
);
}

/* PackMLMachineStateMachineType - ns=2;i=2 */

static UA_StatusCode function_ns_packml_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLMachineStateMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 2771LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLMachineStateMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 2LU)
);
}

/* Running - ns=2;i=75 */

static UA_StatusCode function_ns_packml_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Running");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 75LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Running"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 75LU)
);
}

/* StateNumber - ns=2;i=171 */

static UA_StatusCode function_ns_packml_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_171_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_171_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_171_variant_DataContents);
*variablenode_ns_2_i_171_variant_DataContents = (UA_UInt32) 18;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_171_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 171LU),
UA_NODEID_NUMERIC(ns[2], 75LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_171_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 171LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 171LU)
);
}

/* RunningToStopping - ns=2;i=60 */

static UA_StatusCode function_ns_packml_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToStopping");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 60LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "RunningToStopping"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 60LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 75LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 60LU)
);
}

/* TransitionNumber - ns=2;i=166 */

static UA_StatusCode function_ns_packml_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 166LU),
UA_NODEID_NUMERIC(ns[2], 60LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 166LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 166LU)
);
}

/* StoppedToRunning - ns=2;i=59 */

static UA_StatusCode function_ns_packml_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StoppedToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 59LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "StoppedToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 59LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 75LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 59LU)
);
}

/* TransitionNumber - ns=2;i=165 */

static UA_StatusCode function_ns_packml_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 165LU),
UA_NODEID_NUMERIC(ns[2], 59LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 165LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 165LU)
);
}

/* ClearingToStopped - ns=2;i=58 */

static UA_StatusCode function_ns_packml_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ClearingToStopped");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 58LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ClearingToStopped"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 58LU)
);
}

/* TransitionNumber - ns=2;i=164 */

static UA_StatusCode function_ns_packml_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 164LU),
UA_NODEID_NUMERIC(ns[2], 58LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 164LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 164LU)
);
}

/* StoppingToStopped - ns=2;i=57 */

static UA_StatusCode function_ns_packml_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StoppingToStopped");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 57LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "StoppingToStopped"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 57LU)
);
}

/* TransitionNumber - ns=2;i=163 */

static UA_StatusCode function_ns_packml_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 163LU),
UA_NODEID_NUMERIC(ns[2], 57LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 163LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 163LU)
);
}

/* Clearing - ns=2;i=55 */

static UA_StatusCode function_ns_packml_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Clearing");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Initiated by a state command to clear faults that may have occurred when ABORTING, and are present in the ABORTED state.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 55LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Clearing"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 55LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 58LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 55LU)
);
}

/* StateNumber - ns=2;i=157 */

static UA_StatusCode function_ns_packml_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_157_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_157_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_157_variant_DataContents);
*variablenode_ns_2_i_157_variant_DataContents = (UA_UInt32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_157_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 157LU),
UA_NODEID_NUMERIC(ns[2], 55LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_157_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 157LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 157LU)
);
}

/* Stopping - ns=2;i=54 */

static UA_StatusCode function_ns_packml_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Stopping");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This state executes the logic which brings the machine to a controlled stop as reflected by the STOPPED state.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 54LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Stopping"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 54LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 57LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 54LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 60LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 54LU)
);
}

/* StateNumber - ns=2;i=156 */

static UA_StatusCode function_ns_packml_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_156_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_156_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_156_variant_DataContents);
*variablenode_ns_2_i_156_variant_DataContents = (UA_UInt32) 7;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_156_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 156LU),
UA_NODEID_NUMERIC(ns[2], 54LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_156_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 156LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 156LU)
);
}

/* Stopped - ns=2;i=53 */

static UA_StatusCode function_ns_packml_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Stopped");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The machine is powered and stationary after completing the STOPPING state. All communications with other systems are functioning (if applicable).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 53LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Stopped"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 53LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 57LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 53LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 58LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 53LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 59LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 53LU)
);
}

/* StateNumber - ns=2;i=155 */

static UA_StatusCode function_ns_packml_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_155_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_155_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_155_variant_DataContents);
*variablenode_ns_2_i_155_variant_DataContents = (UA_UInt32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_155_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 155LU),
UA_NODEID_NUMERIC(ns[2], 53LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_155_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 155LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 155LU)
);
}

/* Reset - ns=2;i=376 */

static UA_StatusCode function_ns_packml_51_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 376LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 376LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 376LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 59LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_51_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 376LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Stop - ns=2;i=375 */

static UA_StatusCode function_ns_packml_52_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Stop");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 375LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Stop"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 375LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 375LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 60LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_52_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 375LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AvailableTransitions - ns=2;i=154 */

static UA_StatusCode function_ns_packml_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableTransitions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 154LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableTransitions"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 154LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 154LU)
);
}

/* AvailableStates - ns=2;i=153 */

static UA_StatusCode function_ns_packml_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableStates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 153LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableStates"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 153LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 153LU)
);
}

/* PackMLExecuteStateMachineType - ns=2;i=1 */

static UA_StatusCode function_ns_packml_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLExecuteStateMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 2771LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLExecuteStateMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1LU)
);
}

/* StartingToHolding - ns=2;i=99 */

static UA_StatusCode function_ns_packml_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StartingToHolding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 99LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "StartingToHolding"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 99LU)
);
}

/* TransitionNumber - ns=2;i=179 */

static UA_StatusCode function_ns_packml_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 179LU),
UA_NODEID_NUMERIC(ns[2], 99LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 179LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 179LU)
);
}

/* ExecuteState - ns=2;i=56 */

static UA_StatusCode function_ns_packml_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExecuteState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "StateMachine that provides additional sube");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 56LU),
UA_NODEID_NUMERIC(ns[2], 2LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ExecuteState"),
UA_NODEID_NUMERIC(ns[2], 1LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 56LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 56LU), UA_NODEID_NUMERIC(ns[0], 117LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 75LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 56LU)
);
}

/* AvailableStates - ns=2;i=177 */

static UA_StatusCode function_ns_packml_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableStates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 177LU),
UA_NODEID_NUMERIC(ns[2], 56LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableStates"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 177LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 177LU)
);
}

/* CurrentState - ns=2;i=161 */

static UA_StatusCode function_ns_packml_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 161LU),
UA_NODEID_NUMERIC(ns[2], 56LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 161LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 161LU)
);
}

/* Id - ns=2;i=162 */

static UA_StatusCode function_ns_packml_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 162LU),
UA_NODEID_NUMERIC(ns[2], 161LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 162LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 162LU)
);
}

/* AvailableTransitions - ns=2;i=160 */

static UA_StatusCode function_ns_packml_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableTransitions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 160LU),
UA_NODEID_NUMERIC(ns[2], 56LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableTransitions"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 160LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 160LU)
);
}

/* SuspendedToUnsuspending - ns=2;i=52 */

static UA_StatusCode function_ns_packml_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToUnsuspending");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 52LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SuspendedToUnsuspending"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 52LU)
);
}

/* TransitionNumber - ns=2;i=152 */

static UA_StatusCode function_ns_packml_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 152LU),
UA_NODEID_NUMERIC(ns[2], 52LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 152LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 152LU)
);
}

/* CompleteToResetting - ns=2;i=51 */

static UA_StatusCode function_ns_packml_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CompleteToResetting");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 51LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CompleteToResetting"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 51LU)
);
}

/* TransitionNumber - ns=2;i=151 */

static UA_StatusCode function_ns_packml_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 151LU),
UA_NODEID_NUMERIC(ns[2], 51LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 151LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 151LU)
);
}

/* CompletingToComplete - ns=2;i=50 */

static UA_StatusCode function_ns_packml_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CompletingToComplete");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 50LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CompletingToComplete"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 50LU)
);
}

/* TransitionNumber - ns=2;i=150 */

static UA_StatusCode function_ns_packml_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 150LU),
UA_NODEID_NUMERIC(ns[2], 50LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 150LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 150LU)
);
}

/* ExecuteToCompleting - ns=2;i=49 */

static UA_StatusCode function_ns_packml_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExecuteToCompleting");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 49LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ExecuteToCompleting"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 49LU)
);
}

/* TransitionNumber - ns=2;i=149 */

static UA_StatusCode function_ns_packml_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 149LU),
UA_NODEID_NUMERIC(ns[2], 49LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 149LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 149LU)
);
}

/* UnholdingToExecute - ns=2;i=48 */

static UA_StatusCode function_ns_packml_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UnholdingToExecute");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 48LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "UnholdingToExecute"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 48LU)
);
}

/* TransitionNumber - ns=2;i=148 */

static UA_StatusCode function_ns_packml_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 148LU),
UA_NODEID_NUMERIC(ns[2], 48LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 148LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 148LU)
);
}

/* HeldToUnholding - ns=2;i=47 */

static UA_StatusCode function_ns_packml_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HeldToUnholding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 47LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "HeldToUnholding"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 47LU)
);
}

/* TransitionNumber - ns=2;i=147 */

static UA_StatusCode function_ns_packml_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 147LU),
UA_NODEID_NUMERIC(ns[2], 47LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 147LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 147LU)
);
}

/* HoldingToHeld - ns=2;i=46 */

static UA_StatusCode function_ns_packml_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HoldingToHeld");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 46LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "HoldingToHeld"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 46LU)
);
}

/* TransitionNumber - ns=2;i=146 */

static UA_StatusCode function_ns_packml_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 146LU),
UA_NODEID_NUMERIC(ns[2], 46LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 146LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 146LU)
);
}

/* ExecuteToHolding - ns=2;i=45 */

static UA_StatusCode function_ns_packml_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExecuteToHolding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 45LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ExecuteToHolding"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 45LU)
);
}

/* TransitionNumber - ns=2;i=145 */

static UA_StatusCode function_ns_packml_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 145LU),
UA_NODEID_NUMERIC(ns[2], 45LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 145LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 145LU)
);
}

/* UnsuspendingToExecute - ns=2;i=44 */

static UA_StatusCode function_ns_packml_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UnsuspendingToExecute");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 44LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "UnsuspendingToExecute"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 44LU)
);
}

/* TransitionNumber - ns=2;i=144 */

static UA_StatusCode function_ns_packml_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 144LU),
UA_NODEID_NUMERIC(ns[2], 44LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 144LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 144LU)
);
}

/* SuspendingToSuspended - ns=2;i=43 */

static UA_StatusCode function_ns_packml_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendingToSuspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 43LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SuspendingToSuspended"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 43LU)
);
}

/* TransitionNumber - ns=2;i=143 */

static UA_StatusCode function_ns_packml_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 143LU),
UA_NODEID_NUMERIC(ns[2], 43LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 143LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 143LU)
);
}

/* ExecuteToSuspending - ns=2;i=42 */

static UA_StatusCode function_ns_packml_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExecuteToSuspending");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 42LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ExecuteToSuspending"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 42LU)
);
}

/* TransitionNumber - ns=2;i=142 */

static UA_StatusCode function_ns_packml_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 142LU),
UA_NODEID_NUMERIC(ns[2], 42LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 142LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 142LU)
);
}

/* StartingToExecute - ns=2;i=41 */

static UA_StatusCode function_ns_packml_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StartingToExecute");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 41LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "StartingToExecute"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 41LU)
);
}

/* TransitionNumber - ns=2;i=141 */

static UA_StatusCode function_ns_packml_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 141LU),
UA_NODEID_NUMERIC(ns[2], 41LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 141LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 141LU)
);
}

/* IdleToStarting - ns=2;i=40 */

static UA_StatusCode function_ns_packml_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IdleToStarting");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 40LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "IdleToStarting"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 40LU)
);
}

/* TransitionNumber - ns=2;i=140 */

static UA_StatusCode function_ns_packml_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 140LU),
UA_NODEID_NUMERIC(ns[2], 40LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 140LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 140LU)
);
}

/* ResettingToIdle - ns=2;i=39 */

static UA_StatusCode function_ns_packml_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ResettingToIdle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 39LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ResettingToIdle"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 39LU)
);
}

/* TransitionNumber - ns=2;i=139 */

static UA_StatusCode function_ns_packml_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 139LU),
UA_NODEID_NUMERIC(ns[2], 39LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 139LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 139LU)
);
}

/* Complete - ns=2;i=38 */

static UA_StatusCode function_ns_packml_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Complete");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The machine has finished the COMPLETING state and is now waiting for a Reset command before transitioning to the RESETTING state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 38LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Complete"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 38LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 50LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 38LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 51LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 38LU)
);
}

/* StateNumber - ns=2;i=138 */

static UA_StatusCode function_ns_packml_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_138_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_138_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_138_variant_DataContents);
*variablenode_ns_2_i_138_variant_DataContents = (UA_UInt32) 17;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_138_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 138LU),
UA_NODEID_NUMERIC(ns[2], 38LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_138_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 138LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 138LU)
);
}

/* Unsuspend - ns=2;i=372 */

static UA_StatusCode function_ns_packml_93_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Unsuspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 372LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Unsuspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 372LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 372LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 52LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_93_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 372LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Completing - ns=2;i=37 */

static UA_StatusCode function_ns_packml_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Completing");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Normal operation has run to completion (i.e., processing of material at the infeed will stop).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 37LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Completing"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 37LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 49LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 37LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 50LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 37LU)
);
}

/* StateNumber - ns=2;i=137 */

static UA_StatusCode function_ns_packml_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_137_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_137_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_137_variant_DataContents);
*variablenode_ns_2_i_137_variant_DataContents = (UA_UInt32) 16;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_137_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 137LU),
UA_NODEID_NUMERIC(ns[2], 37LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_137_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 137LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 137LU)
);
}

/* Start - ns=2;i=369 */

static UA_StatusCode function_ns_packml_96_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 369LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 369LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 369LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 40LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_96_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 369LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=342 */

static UA_StatusCode function_ns_packml_97_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_2_i_342_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_342_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_342_variant_DataContents[0].name = UA_STRING("Parameter");
variablenode_ns_2_i_342_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[2], 16LU);
variablenode_ns_2_i_342_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_2_i_342_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_2_i_342_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_2_i_342_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_2_i_342_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_2_i_342_variant_DataContents[0].arrayDimensions = variablenode_ns_2_i_342_variant_DataContents0_arrayDimensions;
variablenode_ns_2_i_342_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_342_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 342LU),
UA_NODEID_NUMERIC(ns[2], 369LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 342LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_97_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 342LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Unhold - ns=2;i=368 */

static UA_StatusCode function_ns_packml_98_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Unhold");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 368LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Unhold"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 368LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 368LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 47LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_98_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 368LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Suspend - ns=2;i=367 */

static UA_StatusCode function_ns_packml_99_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 367LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Suspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 367LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 367LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 42LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_99_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 367LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Hold - ns=2;i=366 */

static UA_StatusCode function_ns_packml_100_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Hold");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 366LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Hold"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 366LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 45LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 366LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 99LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 366LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_100_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 366LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ToComplete - ns=2;i=365 */

static UA_StatusCode function_ns_packml_101_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ToComplete");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 365LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ToComplete"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 365LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 365LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 49LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_101_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 365LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Reset - ns=2;i=361 */

static UA_StatusCode function_ns_packml_102_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 361LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 361LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 361LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 51LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_102_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 361LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Execute - ns=2;i=36 */

static UA_StatusCode function_ns_packml_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Execute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Once the machine is processing materials it is deemed to be executing or in the EXECUTE state.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 36LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Execute"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 36LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 41LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 36LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 42LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 36LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 44LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 36LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 45LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 36LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 48LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 36LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 49LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 36LU)
);
}

/* StateNumber - ns=2;i=136 */

static UA_StatusCode function_ns_packml_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_136_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_136_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_136_variant_DataContents);
*variablenode_ns_2_i_136_variant_DataContents = (UA_UInt32) 6;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_136_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 136LU),
UA_NODEID_NUMERIC(ns[2], 36LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_136_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 136LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 136LU)
);
}

/* Unholding - ns=2;i=35 */

static UA_StatusCode function_ns_packml_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Unholding");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The UNHOLDING state is a response to an operator command to resume the EXECUTE state. Issuing the Unhold command will retrieve the saved set-points and return the status conditions to prepare the machine to re-enter the normal EXECUTE state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 35LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Unholding"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 35LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 47LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 35LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 48LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 35LU)
);
}

/* StateNumber - ns=2;i=135 */

static UA_StatusCode function_ns_packml_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_135_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_135_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_135_variant_DataContents);
*variablenode_ns_2_i_135_variant_DataContents = (UA_UInt32) 12;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_135_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 135LU),
UA_NODEID_NUMERIC(ns[2], 35LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_135_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 135LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 135LU)
);
}

/* Held - ns=2;i=34 */

static UA_StatusCode function_ns_packml_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Held");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The HELD state holds the machine's operation while material blockages are cleared, or to stop throughput while a downstream problem is resolved, or enable the safe correction of an equipment fault before the production may be resumed.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 34LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Held"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 34LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 46LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 34LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 47LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 34LU)
);
}

/* StateNumber - ns=2;i=134 */

static UA_StatusCode function_ns_packml_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_134_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_134_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_134_variant_DataContents);
*variablenode_ns_2_i_134_variant_DataContents = (UA_UInt32) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_134_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 134LU),
UA_NODEID_NUMERIC(ns[2], 34LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_134_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 134LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 134LU)
);
}

/* Holding - ns=2;i=33 */

static UA_StatusCode function_ns_packml_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Holding");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Issuing the Unhold command will retrieve the saved set-points and return the status conditions to prepare the machine to re-enter the normal EXECUTE state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 33LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Holding"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 33LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 45LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 33LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 46LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 33LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 99LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 33LU)
);
}

/* StateNumber - ns=2;i=133 */

static UA_StatusCode function_ns_packml_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_133_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_133_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_133_variant_DataContents);
*variablenode_ns_2_i_133_variant_DataContents = (UA_UInt32) 10;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_133_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 133LU),
UA_NODEID_NUMERIC(ns[2], 33LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_133_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 133LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 133LU)
);
}

/* Unsuspending - ns=2;i=32 */

static UA_StatusCode function_ns_packml_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Unsuspending");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This state is a result of a machine generated request from SUSPENDED state to go back to the EXECUTE state. The actions of this state may include ramping up speeds, turning on vacuums, and the re-engagement of clutches.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 32LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Unsuspending"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 32LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 44LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 32LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 52LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 32LU)
);
}

/* StateNumber - ns=2;i=132 */

static UA_StatusCode function_ns_packml_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_132_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_132_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_132_variant_DataContents);
*variablenode_ns_2_i_132_variant_DataContents = (UA_UInt32) 14;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_132_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 132LU),
UA_NODEID_NUMERIC(ns[2], 32LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_132_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 132LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 132LU)
);
}

/* Suspended - ns=2;i=31 */

static UA_StatusCode function_ns_packml_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspended");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The machine may be running at a relevant set point speed, but there is no product being produced while the machine is waiting for external process conditions to return to normal.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 31LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Suspended"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 31LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 43LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 31LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 52LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 31LU)
);
}

/* StateNumber - ns=2;i=131 */

static UA_StatusCode function_ns_packml_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_131_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_131_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_131_variant_DataContents);
*variablenode_ns_2_i_131_variant_DataContents = (UA_UInt32) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_131_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 131LU),
UA_NODEID_NUMERIC(ns[2], 31LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_131_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 131LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 131LU)
);
}

/* Suspending - ns=2;i=30 */

static UA_StatusCode function_ns_packml_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspending");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This state is a result of a change in monitored conditions due to process conditions or factors. The trigger event will cause a temporary suspension of the EXECUTE state. SUSPENDING is typically the result of starvation of upstream material in-feeds (i.e., container feed, beverage feed, crown feed, lubricant feed, etc.) that is outside the dynamic speed control range or a downstream out-feed blockage that prevents the machine from EXECUTING continued steady production");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 30LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Suspending"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 30LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 42LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 30LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 43LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 30LU)
);
}

/* StateNumber - ns=2;i=130 */

static UA_StatusCode function_ns_packml_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_130_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_130_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_130_variant_DataContents);
*variablenode_ns_2_i_130_variant_DataContents = (UA_UInt32) 13;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_130_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 130LU),
UA_NODEID_NUMERIC(ns[2], 30LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_130_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 130LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 130LU)
);
}

/* Starting - ns=2;i=29 */

static UA_StatusCode function_ns_packml_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Starting");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This state provides the steps needed to start the machine and is a result of a starting type command (local or remote). Following this command, the machine will begin to Execute");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 29LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Starting"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 29LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 40LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 29LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 41LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 29LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 99LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 29LU)
);
}

/* StateNumber - ns=2;i=129 */

static UA_StatusCode function_ns_packml_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_129_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_129_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_129_variant_DataContents);
*variablenode_ns_2_i_129_variant_DataContents = (UA_UInt32) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_129_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 129LU),
UA_NODEID_NUMERIC(ns[2], 29LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_129_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 129LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 129LU)
);
}

/* Idle - ns=2;i=28 */

static UA_StatusCode function_ns_packml_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Idle");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This is a state which indicates that RESETTING is complete. This state maintains the machine conditions which were achieved during the RESETTING state, and performs operations required when the machine is in IDLE.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 28LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Idle"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 28LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 39LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 28LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 40LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 28LU)
);
}

/* StateNumber - ns=2;i=128 */

static UA_StatusCode function_ns_packml_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_128_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_128_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_128_variant_DataContents);
*variablenode_ns_2_i_128_variant_DataContents = (UA_UInt32) 4;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_128_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 128LU),
UA_NODEID_NUMERIC(ns[2], 28LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_128_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 128LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 128LU)
);
}

/* Resetting - ns=2;i=27 */

static UA_StatusCode function_ns_packml_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Resetting");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "will typically cause a machine to sound a horn and place the machine in a state where components are energized awaiting a START command");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 27LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Resetting"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 27LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 39LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 27LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 51LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 27LU)
);
}

/* StateNumber - ns=2;i=127 */

static UA_StatusCode function_ns_packml_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_127_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_127_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_127_variant_DataContents);
*variablenode_ns_2_i_127_variant_DataContents = (UA_UInt32) 15;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_127_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 127LU),
UA_NODEID_NUMERIC(ns[2], 27LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_127_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 127LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 127LU)
);
}

/* AvailableTransitions - ns=2;i=126 */

static UA_StatusCode function_ns_packml_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableTransitions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 126LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableTransitions"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 126LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 126LU)
);
}

/* AvailableStates - ns=2;i=125 */

static UA_StatusCode function_ns_packml_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableStates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 125LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableStates"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 125LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 125LU)
);
}

/* UnholdingToHolding - ns=2;i=103 */

static UA_StatusCode function_ns_packml_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UnholdingToHolding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 103LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "UnholdingToHolding"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 103LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 366LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 103LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 33LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 103LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 35LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 103LU)
);
}

/* TransitionNumber - ns=2;i=217 */

static UA_StatusCode function_ns_packml_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 217LU),
UA_NODEID_NUMERIC(ns[2], 103LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 217LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 217LU)
);
}

/* SuspendingToHolding - ns=2;i=102 */

static UA_StatusCode function_ns_packml_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendingToHolding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 102LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SuspendingToHolding"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 102LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 366LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 102LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 33LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 102LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 30LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 102LU)
);
}

/* TransitionNumber - ns=2;i=216 */

static UA_StatusCode function_ns_packml_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 216LU),
UA_NODEID_NUMERIC(ns[2], 102LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 216LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 216LU)
);
}

/* SuspendedToHolding - ns=2;i=101 */

static UA_StatusCode function_ns_packml_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToHolding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 101LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SuspendedToHolding"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 101LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 366LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 101LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 33LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 101LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 31LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 101LU)
);
}

/* TransitionNumber - ns=2;i=215 */

static UA_StatusCode function_ns_packml_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 215LU),
UA_NODEID_NUMERIC(ns[2], 101LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 215LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 215LU)
);
}

/* UnsuspendingToHolding - ns=2;i=100 */

static UA_StatusCode function_ns_packml_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UnsuspendingToHolding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 100LU),
UA_NODEID_NUMERIC(ns[2], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "UnsuspendingToHolding"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 100LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 366LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 100LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 33LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 100LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 32LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 100LU)
);
}

/* TransitionNumber - ns=2;i=208 */

static UA_StatusCode function_ns_packml_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 208LU),
UA_NODEID_NUMERIC(ns[2], 100LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 208LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 208LU)
);
}

/* PackMLBaseStateMachineType - ns=2;i=3 */

static UA_StatusCode function_ns_packml_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLBaseStateMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 2771LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLBaseStateMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 3LU)
);
}

/* Cleared - ns=2;i=71 */

static UA_StatusCode function_ns_packml_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Cleared");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 71LU),
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Cleared"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 71LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 71LU)
);
}

/* StateNumber - ns=2;i=178 */

static UA_StatusCode function_ns_packml_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_178_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_178_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_178_variant_DataContents);
*variablenode_ns_2_i_178_variant_DataContents = (UA_UInt32) 19;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_178_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 178LU),
UA_NODEID_NUMERIC(ns[2], 71LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_178_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 178LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 178LU)
);
}

/* ClearedToAborting - ns=2;i=67 */

static UA_StatusCode function_ns_packml_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ClearedToAborting");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 67LU),
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ClearedToAborting"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 67LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 71LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 67LU)
);
}

/* TransitionNumber - ns=2;i=176 */

static UA_StatusCode function_ns_packml_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 176LU),
UA_NODEID_NUMERIC(ns[2], 67LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 176LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 176LU)
);
}

/* AbortingToAborted - ns=2;i=66 */

static UA_StatusCode function_ns_packml_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AbortingToAborted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 66LU),
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "AbortingToAborted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 66LU)
);
}

/* TransitionNumber - ns=2;i=175 */

static UA_StatusCode function_ns_packml_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 175LU),
UA_NODEID_NUMERIC(ns[2], 66LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 175LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 175LU)
);
}

/* AbortedToCleared - ns=2;i=65 */

static UA_StatusCode function_ns_packml_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AbortedToCleared");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 65LU),
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "AbortedToCleared"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 65LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 71LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 65LU)
);
}

/* TransitionNumber - ns=2;i=174 */

static UA_StatusCode function_ns_packml_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 174LU),
UA_NODEID_NUMERIC(ns[2], 65LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 174LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 174LU)
);
}

/* MachineState - ns=2;i=64 */

static UA_StatusCode function_ns_packml_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MachineState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 64LU),
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MachineState"),
UA_NODEID_NUMERIC(ns[2], 2LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 64LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 64LU), UA_NODEID_NUMERIC(ns[0], 117LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 71LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 64LU)
);
}

/* AvailableStates - ns=2;i=212 */

static UA_StatusCode function_ns_packml_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableStates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 212LU),
UA_NODEID_NUMERIC(ns[2], 64LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableStates"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 212LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 212LU)
);
}

/* AvailableTransitions - ns=2;i=204 */

static UA_StatusCode function_ns_packml_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableTransitions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 204LU),
UA_NODEID_NUMERIC(ns[2], 64LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableTransitions"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 204LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 204LU)
);
}

/* CurrentState - ns=2;i=172 */

static UA_StatusCode function_ns_packml_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 172LU),
UA_NODEID_NUMERIC(ns[2], 64LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 172LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 172LU)
);
}

/* Id - ns=2;i=173 */

static UA_StatusCode function_ns_packml_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 173LU),
UA_NODEID_NUMERIC(ns[2], 172LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 173LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 173LU)
);
}

/* Aborted - ns=2;i=62 */

static UA_StatusCode function_ns_packml_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Aborted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 62LU),
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Aborted"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 62LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 65LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 62LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 66LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 62LU)
);
}

/* StateNumber - ns=2;i=169 */

static UA_StatusCode function_ns_packml_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_169_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_169_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_169_variant_DataContents);
*variablenode_ns_2_i_169_variant_DataContents = (UA_UInt32) 9;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_169_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 169LU),
UA_NODEID_NUMERIC(ns[2], 62LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_169_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 169LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 169LU)
);
}

/* Aborting - ns=2;i=61 */

static UA_StatusCode function_ns_packml_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Aborting");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 61LU),
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Aborting"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 61LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 66LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 61LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 67LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 61LU)
);
}

/* StateNumber - ns=2;i=168 */

static UA_StatusCode function_ns_packml_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_2_i_168_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_168_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_168_variant_DataContents);
*variablenode_ns_2_i_168_variant_DataContents = (UA_UInt32) 8;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_168_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 168LU),
UA_NODEID_NUMERIC(ns[2], 61LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_UInt32_delete(variablenode_ns_2_i_168_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 168LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 168LU)
);
}

/* Abort - ns=2;i=364 */

static UA_StatusCode function_ns_packml_151_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Abort");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 364LU),
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Abort"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 364LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 67LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 364LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_151_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 364LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Clear - ns=2;i=363 */

static UA_StatusCode function_ns_packml_152_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Clear");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 363LU),
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Clear"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 363LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 65LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 363LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_152_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 363LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AvailableStates - ns=2;i=167 */

static UA_StatusCode function_ns_packml_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableStates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 167LU),
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableStates"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 167LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 167LU)
);
}

/* AvailableTransitions - ns=2;i=158 */

static UA_StatusCode function_ns_packml_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableTransitions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 158LU),
UA_NODEID_NUMERIC(ns[2], 3LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableTransitions"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 158LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 158LU)
);
}

/* PackMLStatusObjectType - ns=2;i=4 */

static UA_StatusCode function_ns_packml_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLStatusObjectType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLStatusObjectType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 4LU)
);
}

/* MaterialInterlock - ns=2;i=237 */

static UA_StatusCode function_ns_packml_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialInterlock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 237LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[2], 21LU),
UA_QUALIFIEDNAME(ns[2], "MaterialInterlock"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 237LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 237LU)
);
}

/* MaterialInterlocked - ns=2;i=236 */

static UA_StatusCode function_ns_packml_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialInterlocked");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 236LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MaterialInterlocked"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 236LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 236LU)
);
}

/* CurMachSpeed - ns=2;i=232 */

static UA_StatusCode function_ns_packml_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurMachSpeed");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 232LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CurMachSpeed"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 232LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 232LU)
);
}

/* EURange - ns=2;i=233 */

static UA_StatusCode function_ns_packml_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 233LU),
UA_NODEID_NUMERIC(ns[2], 232LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 233LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 233LU)
);
}

/* EquipmentStarved - ns=2;i=224 */

static UA_StatusCode function_ns_packml_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentStarved");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 224LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "EquipmentStarved"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 224LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 224LU)
);
}

/* MachSpeed - ns=2;i=219 */

static UA_StatusCode function_ns_packml_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MachSpeed");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 219LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MachSpeed"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 219LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 219LU)
);
}

/* EURange - ns=2;i=220 */

static UA_StatusCode function_ns_packml_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 220LU),
UA_NODEID_NUMERIC(ns[2], 219LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 220LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 220LU)
);
}

/* EquipmentBlocked - ns=2;i=211 */

static UA_StatusCode function_ns_packml_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentBlocked");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 211LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "EquipmentBlocked"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 211LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 211LU)
);
}

/* StateChangeInProcess - ns=2;i=210 */

static UA_StatusCode function_ns_packml_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateChangeInProcess");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 210LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "StateChangeInProcess"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 210LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 210LU)
);
}

/* StateRequested - ns=2;i=209 */

static UA_StatusCode function_ns_packml_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateRequested");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 209LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "StateRequested"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 209LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 209LU)
);
}

/* UnitModeChangeInProcess - ns=2;i=201 */

static UA_StatusCode function_ns_packml_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnitModeChangeInProcess");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 201LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "UnitModeChangeInProcess"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 201LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 201LU)
);
}

/* UnitModeCurrent - ns=2;i=200 */

static UA_StatusCode function_ns_packml_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 29LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnitModeCurrent");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 200LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "UnitModeCurrent"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 200LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 200LU)
);
}

/* UnitSupportedModes - ns=2;i=193 */

static UA_StatusCode function_ns_packml_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnitSupportedModes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 193LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "UnitSupportedModes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 193LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 193LU)
);
}

/* UnitModeRequested - ns=2;i=192 */

static UA_StatusCode function_ns_packml_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnitModeRequested");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 192LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "UnitModeRequested"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 192LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 192LU)
);
}

/* RemoteParameter - ns=2;i=123 */

static UA_StatusCode function_ns_packml_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 19LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RemoteParameter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 123LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "RemoteParameter"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 123LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 123LU)
);
}

/* Product - ns=2;i=122 */

static UA_StatusCode function_ns_packml_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Product");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 122LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Product"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 122LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 122LU)
);
}

/* Parameter - ns=2;i=121 */

static UA_StatusCode function_ns_packml_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 16LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Parameter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 121LU),
UA_NODEID_NUMERIC(ns[2], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Parameter"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 121LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 121LU)
);
}

/* PackMLBaseObjectType - ns=2;i=6 */

static UA_StatusCode function_ns_packml_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLBaseObjectType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLBaseObjectType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6LU)
);
}

/* BaseStateMachine - ns=2;i=88 */

static UA_StatusCode function_ns_packml_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BaseStateMachine");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 88LU),
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "BaseStateMachine"),
UA_NODEID_NUMERIC(ns[2], 3LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 88LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 88LU)
);
}

/* MachineState - ns=2;i=89 */

static UA_StatusCode function_ns_packml_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MachineState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 89LU),
UA_NODEID_NUMERIC(ns[2], 88LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MachineState"),
UA_NODEID_NUMERIC(ns[2], 2LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 89LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 89LU)
);
}

/* ExecuteState - ns=2;i=90 */

static UA_StatusCode function_ns_packml_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExecuteState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "StateMachine that provides additional sube");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 90LU),
UA_NODEID_NUMERIC(ns[2], 89LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ExecuteState"),
UA_NODEID_NUMERIC(ns[2], 1LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 90LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 90LU)
);
}

/* CurrentState - ns=2;i=266 */

static UA_StatusCode function_ns_packml_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 266LU),
UA_NODEID_NUMERIC(ns[2], 90LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 266LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 266LU)
);
}

/* Id - ns=2;i=227 */

static UA_StatusCode function_ns_packml_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 227LU),
UA_NODEID_NUMERIC(ns[2], 266LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 227LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 227LU)
);
}

/* AvailableStates - ns=2;i=223 */

static UA_StatusCode function_ns_packml_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableStates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 223LU),
UA_NODEID_NUMERIC(ns[2], 90LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableStates"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 223LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 223LU)
);
}

/* AvailableTransitions - ns=2;i=222 */

static UA_StatusCode function_ns_packml_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableTransitions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 222LU),
UA_NODEID_NUMERIC(ns[2], 90LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableTransitions"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 222LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 222LU)
);
}

/* CurrentState - ns=2;i=262 */

static UA_StatusCode function_ns_packml_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 262LU),
UA_NODEID_NUMERIC(ns[2], 89LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 262LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 262LU)
);
}

/* Id - ns=2;i=263 */

static UA_StatusCode function_ns_packml_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 263LU),
UA_NODEID_NUMERIC(ns[2], 262LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 263LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 263LU)
);
}

/* AvailableStates - ns=2;i=214 */

static UA_StatusCode function_ns_packml_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableStates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 214LU),
UA_NODEID_NUMERIC(ns[2], 89LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableStates"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 214LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 214LU)
);
}

/* AvailableTransitions - ns=2;i=213 */

static UA_StatusCode function_ns_packml_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableTransitions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 213LU),
UA_NODEID_NUMERIC(ns[2], 89LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableTransitions"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 213LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 213LU)
);
}

/* CurrentState - ns=2;i=272 */

static UA_StatusCode function_ns_packml_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 272LU),
UA_NODEID_NUMERIC(ns[2], 88LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 272LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 272LU)
);
}

/* Id - ns=2;i=273 */

static UA_StatusCode function_ns_packml_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 273LU),
UA_NODEID_NUMERIC(ns[2], 272LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 273LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 273LU)
);
}

/* AvailableStates - ns=2;i=259 */

static UA_StatusCode function_ns_packml_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableStates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 259LU),
UA_NODEID_NUMERIC(ns[2], 88LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableStates"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 259LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 259LU)
);
}

/* AvailableTransitions - ns=2;i=202 */

static UA_StatusCode function_ns_packml_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableTransitions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 202LU),
UA_NODEID_NUMERIC(ns[2], 88LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AvailableTransitions"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 202LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 202LU)
);
}

/* Status - ns=2;i=87 */

static UA_StatusCode function_ns_packml_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 87LU),
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Status"),
UA_NODEID_NUMERIC(ns[2], 4LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 87LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 87LU)
);
}

/* UnitSupportedModes - ns=2;i=290 */

static UA_StatusCode function_ns_packml_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnitSupportedModes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 290LU),
UA_NODEID_NUMERIC(ns[2], 87LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "UnitSupportedModes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 290LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 290LU)
);
}

/* EquipmentStarved - ns=2;i=275 */

static UA_StatusCode function_ns_packml_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentStarved");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 275LU),
UA_NODEID_NUMERIC(ns[2], 87LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "EquipmentStarved"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 275LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 275LU)
);
}

/* EquipmentBlocked - ns=2;i=274 */

static UA_StatusCode function_ns_packml_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentBlocked");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 274LU),
UA_NODEID_NUMERIC(ns[2], 87LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "EquipmentBlocked"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 274LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 274LU)
);
}

/* MachSpeed - ns=2;i=257 */

static UA_StatusCode function_ns_packml_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MachSpeed");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 257LU),
UA_NODEID_NUMERIC(ns[2], 87LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MachSpeed"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 257LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 257LU)
);
}

/* EURange - ns=2;i=258 */

static UA_StatusCode function_ns_packml_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 258LU),
UA_NODEID_NUMERIC(ns[2], 257LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 258LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 258LU)
);
}

/* CurMachSpeed - ns=2;i=255 */

static UA_StatusCode function_ns_packml_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurMachSpeed");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 255LU),
UA_NODEID_NUMERIC(ns[2], 87LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CurMachSpeed"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 255LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 255LU)
);
}

/* EURange - ns=2;i=256 */

static UA_StatusCode function_ns_packml_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 256LU),
UA_NODEID_NUMERIC(ns[2], 255LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 256LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 256LU)
);
}

/* UnitModeCurrent - ns=2;i=225 */

static UA_StatusCode function_ns_packml_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 29LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnitModeCurrent");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 225LU),
UA_NODEID_NUMERIC(ns[2], 87LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "UnitModeCurrent"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 225LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 225LU)
);
}

/* SetInterlock - ns=2;i=404 */

static UA_StatusCode function_ns_packml_198_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetInterlock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 404LU),
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SetInterlock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 404LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_198_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 404LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=351 */

static UA_StatusCode function_ns_packml_199_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_2_i_351_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_351_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_351_variant_DataContents[0].name = UA_STRING("InterlockId");
variablenode_ns_2_i_351_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_2_i_351_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_351_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_351_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_351_variant_DataContents[1].name = UA_STRING("State");
variablenode_ns_2_i_351_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_2_i_351_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_351_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_351_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 351LU),
UA_NODEID_NUMERIC(ns[2], 404LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 351LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_199_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 351LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RemoteCommand - ns=2;i=403 */

static UA_StatusCode function_ns_packml_200_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoteCommand");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 403LU),
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "RemoteCommand"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 403LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_200_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 403LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=350 */

static UA_StatusCode function_ns_packml_201_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_2_i_350_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_350_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_350_variant_DataContents[0].name = UA_STRING("RemoteInterface");
variablenode_ns_2_i_350_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[2], 19LU);
variablenode_ns_2_i_350_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_2_i_350_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_2_i_350_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_2_i_350_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_2_i_350_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_2_i_350_variant_DataContents[0].arrayDimensions = variablenode_ns_2_i_350_variant_DataContents0_arrayDimensions;
variablenode_ns_2_i_350_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_350_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 350LU),
UA_NODEID_NUMERIC(ns[2], 403LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 350LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_201_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 350LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SetParameter - ns=2;i=402 */

static UA_StatusCode function_ns_packml_202_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetParameter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 402LU),
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SetParameter"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 402LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_202_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 402LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=352 */

static UA_StatusCode function_ns_packml_203_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_2_i_352_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_352_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_352_variant_DataContents[0].name = UA_STRING("Parameter");
variablenode_ns_2_i_352_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[2], 16LU);
variablenode_ns_2_i_352_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_2_i_352_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_2_i_352_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_2_i_352_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_2_i_352_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_2_i_352_variant_DataContents[0].arrayDimensions = variablenode_ns_2_i_352_variant_DataContents0_arrayDimensions;
variablenode_ns_2_i_352_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_352_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 352LU),
UA_NODEID_NUMERIC(ns[2], 402LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 352LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_203_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 352LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SetProduct - ns=2;i=401 */

static UA_StatusCode function_ns_packml_204_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetProduct");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 401LU),
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SetProduct"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 401LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_204_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 401LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=349 */

static UA_StatusCode function_ns_packml_205_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_2_i_349_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_349_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_349_variant_DataContents[0].name = UA_STRING("Product");
variablenode_ns_2_i_349_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[2], 18LU);
variablenode_ns_2_i_349_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_2_i_349_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_2_i_349_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_2_i_349_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_2_i_349_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_2_i_349_variant_DataContents[0].arrayDimensions = variablenode_ns_2_i_349_variant_DataContents0_arrayDimensions;
variablenode_ns_2_i_349_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_349_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 349LU),
UA_NODEID_NUMERIC(ns[2], 401LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 349LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_205_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 349LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SetMachSpeed - ns=2;i=400 */

static UA_StatusCode function_ns_packml_206_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetMachSpeed");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 400LU),
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SetMachSpeed"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 400LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_206_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 400LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=348 */

static UA_StatusCode function_ns_packml_207_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_2_i_348_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_348_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_348_variant_DataContents[0].name = UA_STRING("RequestedMachineSpeed");
variablenode_ns_2_i_348_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
variablenode_ns_2_i_348_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_348_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_348_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 348LU),
UA_NODEID_NUMERIC(ns[2], 400LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 348LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_207_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 348LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SetUnitMode - ns=2;i=362 */

static UA_StatusCode function_ns_packml_208_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetUnitMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 362LU),
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SetUnitMode"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 362LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_208_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 362LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=118 */

static UA_StatusCode function_ns_packml_209_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_2_i_118_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_118_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_118_variant_DataContents[0].name = UA_STRING("RequestedMode");
variablenode_ns_2_i_118_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_2_i_118_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_118_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_118_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 118LU),
UA_NODEID_NUMERIC(ns[2], 362LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 118LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ns_packml_209_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 118LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* PackMLVersion - ns=2;i=221 */

static UA_StatusCode function_ns_packml_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_221_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_221_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_221_variant_DataContents);
*variablenode_ns_2_i_221_variant_DataContents = UA_STRING_ALLOC("TR88.00.02-2015");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_221_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 221LU),
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "PackMLVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_221_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 221LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 221LU)
);
}

/* TagID - ns=2;i=218 */

static UA_StatusCode function_ns_packml_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TagID");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 218LU),
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "TagID"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 218LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 218LU)
);
}

/* PackMLAdminObjectType - ns=2;i=5 */

static UA_StatusCode function_ns_packml_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLAdminObjectType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PackMLAdminObjectType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5LU)
);
}

/* Admin - ns=2;i=73 */

static UA_StatusCode function_ns_packml_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Admin");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 73LU),
UA_NODEID_NUMERIC(ns[2], 6LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Admin"),
UA_NODEID_NUMERIC(ns[2], 5LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 73LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 73LU)
);
}

/* Parameter - ns=2;i=276 */

static UA_StatusCode function_ns_packml_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 16LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Parameter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 276LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Parameter"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 276LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 276LU)
);
}

/* MachDesignSpeed - ns=2;i=253 */

static UA_StatusCode function_ns_packml_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MachDesignSpeed");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 253LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MachDesignSpeed"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 253LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 253LU)
);
}

/* AccTimeSinceReset - ns=2;i=252 */

static UA_StatusCode function_ns_packml_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AccTimeSinceReset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 252LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "AccTimeSinceReset"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 252LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 252LU)
);
}

/* StateCumulativeTime - ns=2;i=249 */

static UA_StatusCode function_ns_packml_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 2;
attr.arrayDimensionsSize = 2;
UA_UInt32 arrayDimensions[2];
arrayDimensions[0] = 0;
arrayDimensions[1] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateCumulativeTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 249LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "StateCumulativeTime"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 249LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 249LU)
);
}

/* StateCurrentTime - ns=2;i=248 */

static UA_StatusCode function_ns_packml_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 2;
attr.arrayDimensionsSize = 2;
UA_UInt32 arrayDimensions[2];
arrayDimensions[0] = 0;
arrayDimensions[1] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateCurrentTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 248LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "StateCurrentTime"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 248LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 248LU)
);
}

/* ModeCumulativeTime - ns=2;i=247 */

static UA_StatusCode function_ns_packml_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModeCumulativeTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 247LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ModeCumulativeTime"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 247LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 247LU)
);
}

/* ModeCurrentTime - ns=2;i=246 */

static UA_StatusCode function_ns_packml_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModeCurrentTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 246LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ModeCurrentTime"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 246LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 246LU)
);
}

/* StopReasonExtent - ns=2;i=245 */

static UA_StatusCode function_ns_packml_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StopReasonExtent");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 245LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "StopReasonExtent"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 245LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 245LU)
);
}

/* StopReason - ns=2;i=244 */

static UA_StatusCode function_ns_packml_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StopReason");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 244LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[2], 25LU),
UA_QUALIFIEDNAME(ns[2], "StopReason"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 244LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 244LU)
);
}

/* WarningExtent - ns=2;i=243 */

static UA_StatusCode function_ns_packml_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "WarningExtent");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 243LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "WarningExtent"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 243LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 243LU)
);
}

/* Warning - ns=2;i=242 */

static UA_StatusCode function_ns_packml_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Warning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 242LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[2], 24LU),
UA_QUALIFIEDNAME(ns[2], "Warning"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 242LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 242LU)
);
}

/* AlarmHistoryExtent - ns=2;i=241 */

static UA_StatusCode function_ns_packml_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHistoryExtent");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 241LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "AlarmHistoryExtent"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 241LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 241LU)
);
}

/* AlarmHistory - ns=2;i=240 */

static UA_StatusCode function_ns_packml_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHistory");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 240LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[2], 23LU),
UA_QUALIFIEDNAME(ns[2], "AlarmHistory"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 240LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 240LU)
);
}

/* AlarmExtent - ns=2;i=239 */

static UA_StatusCode function_ns_packml_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmExtent");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 239LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "AlarmExtent"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 239LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 239LU)
);
}

/* Alarm - ns=2;i=238 */

static UA_StatusCode function_ns_packml_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Alarm");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 238LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[2], 22LU),
UA_QUALIFIEDNAME(ns[2], "Alarm"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 238LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 238LU)
);
}

/* ProdConsumedCount - ns=2;i=124 */

static UA_StatusCode function_ns_packml_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 14LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProdConsumedCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 124LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ProdConsumedCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 124LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 124LU)
);
}

/* ProdProcessedCount - ns=2;i=120 */

static UA_StatusCode function_ns_packml_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 14LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProdProcessedCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 120LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ProdProcessedCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 120LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 120LU)
);
}

/* ProdDefectiveCount - ns=2;i=119 */

static UA_StatusCode function_ns_packml_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 14LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProdDefectiveCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 119LU),
UA_NODEID_NUMERIC(ns[2], 5LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ProdDefectiveCount"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 119LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 119LU)
);
}

/* TypeDictionary - ns=2;i=197 */
static const UA_Byte variablenode_ns_2_i_197_variant_DataContents_byteArray[6315] = {60, 120, 115, 58, 115, 99, 104, 101, 109, 97, 32, 101, 108, 101, 109, 101, 110, 116, 70, 111, 114, 109, 68, 101, 102, 97, 117, 108, 116, 61, 34, 113, 117, 97, 108, 105, 102, 105, 101, 100, 34, 32, 116, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 80, 97, 99, 107, 77, 76, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 80, 97, 99, 107, 77, 76, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 120, 109, 108, 110, 115, 58, 120, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 34, 62, 10, 32, 60, 120, 115, 58, 105, 109, 112, 111, 114, 116, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 47, 62, 10, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 77, 97, 105, 110, 116, 101, 110, 97, 110, 99, 101, 77, 111, 100, 101, 69, 110, 117, 109, 34, 62, 10, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 73, 110, 118, 97, 108, 105, 100, 95, 48, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 80, 114, 111, 100, 117, 99, 101, 95, 49, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 77, 97, 105, 110, 116, 101, 110, 97, 110, 99, 101, 95, 50, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 77, 97, 110, 117, 97, 108, 95, 51, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 77, 97, 105, 110, 116, 101, 110, 97, 110, 99, 101, 77, 111, 100, 101, 69, 110, 117, 109, 34, 32, 110, 97, 109, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 77, 97, 105, 110, 116, 101, 110, 97, 110, 99, 101, 77, 111, 100, 101, 69, 110, 117, 109, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 77, 97, 105, 110, 116, 101, 110, 97, 110, 99, 101, 77, 111, 100, 101, 69, 110, 117, 109, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 77, 97, 105, 110, 116, 101, 110, 97, 110, 99, 101, 77, 111, 100, 101, 69, 110, 117, 109, 34, 32, 110, 97, 109, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 77, 97, 105, 110, 116, 101, 110, 97, 110, 99, 101, 77, 111, 100, 101, 69, 110, 117, 109, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 77, 97, 105, 110, 116, 101, 110, 97, 110, 99, 101, 77, 111, 100, 101, 69, 110, 117, 109, 34, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 77, 97, 105, 110, 116, 101, 110, 97, 110, 99, 101, 77, 111, 100, 101, 69, 110, 117, 109, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 65, 108, 97, 114, 109, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 73, 68, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 86, 97, 108, 117, 101, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 110, 97, 109, 101, 61, 34, 77, 101, 115, 115, 97, 103, 101, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 67, 97, 116, 101, 103, 111, 114, 121, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 100, 97, 116, 101, 84, 105, 109, 101, 34, 32, 110, 97, 109, 101, 61, 34, 68, 97, 116, 101, 84, 105, 109, 101, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 100, 97, 116, 101, 84, 105, 109, 101, 34, 32, 110, 97, 109, 101, 61, 34, 65, 99, 107, 68, 97, 116, 101, 84, 105, 109, 101, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 111, 111, 108, 101, 97, 110, 34, 32, 110, 97, 109, 101, 61, 34, 84, 114, 105, 103, 103, 101, 114, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 65, 108, 97, 114, 109, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 65, 108, 97, 114, 109, 68, 97, 116, 97, 84, 121, 112, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 65, 108, 97, 114, 109, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 65, 108, 97, 114, 109, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 65, 108, 97, 114, 109, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 65, 108, 97, 114, 109, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 65, 108, 97, 114, 109, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 67, 111, 117, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 73, 68, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 110, 97, 109, 101, 61, 34, 78, 97, 109, 101, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 69, 85, 73, 110, 102, 111, 114, 109, 97, 116, 105, 111, 110, 34, 32, 110, 97, 109, 101, 61, 34, 85, 110, 105, 116, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 67, 111, 117, 110, 116, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 65, 99, 99, 67, 111, 117, 110, 116, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 67, 111, 117, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 67, 111, 117, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 67, 111, 117, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 67, 111, 117, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 67, 111, 117, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 67, 111, 117, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 67, 111, 117, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 73, 68, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 110, 97, 109, 101, 61, 34, 78, 97, 109, 101, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 69, 85, 73, 110, 102, 111, 114, 109, 97, 116, 105, 111, 110, 34, 32, 110, 97, 109, 101, 61, 34, 85, 110, 105, 116, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 102, 108, 111, 97, 116, 34, 32, 110, 97, 109, 101, 61, 34, 86, 97, 108, 117, 101, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 73, 68, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 114, 97, 109, 101, 116, 101, 114, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 68, 97, 116, 97, 84, 121, 112, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 80, 114, 111, 100, 117, 99, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 73, 68, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 114, 111, 99, 101, 115, 115, 86, 97, 114, 105, 97, 98, 108, 101, 115, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 80, 114, 111, 100, 117, 99, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 80, 114, 111, 100, 117, 99, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 80, 114, 111, 100, 117, 99, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 80, 114, 111, 100, 117, 99, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 80, 114, 111, 100, 117, 99, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 80, 114, 111, 100, 117, 99, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 80, 114, 111, 100, 117, 99, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 82, 101, 109, 111, 116, 101, 73, 110, 116, 101, 114, 102, 97, 99, 101, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 78, 117, 109, 98, 101, 114, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 67, 111, 110, 116, 114, 111, 108, 67, 109, 100, 78, 117, 109, 98, 101, 114, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 110, 97, 109, 101, 61, 34, 67, 109, 100, 86, 97, 108, 117, 101, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 114, 97, 109, 101, 116, 101, 114, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 82, 101, 109, 111, 116, 101, 73, 110, 116, 101, 114, 102, 97, 99, 101, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 82, 101, 109, 111, 116, 101, 73, 110, 116, 101, 114, 102, 97, 99, 101, 68, 97, 116, 97, 84, 121, 112, 101, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 82, 101, 109, 111, 116, 101, 73, 110, 116, 101, 114, 102, 97, 99, 101, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 82, 101, 109, 111, 116, 101, 73, 110, 116, 101, 114, 102, 97, 99, 101, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 82, 101, 109, 111, 116, 101, 73, 110, 116, 101, 114, 102, 97, 99, 101, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 82, 101, 109, 111, 116, 101, 73, 110, 116, 101, 114, 102, 97, 99, 101, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 99, 107, 77, 76, 82, 101, 109, 111, 116, 101, 73, 110, 116, 101, 114, 102, 97, 99, 101, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 60, 47, 120, 115, 58, 115, 99, 104, 101, 109, 97, 62, 10};



static UA_StatusCode function_ns_packml_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
UA_ByteString *variablenode_ns_2_i_197_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_2_i_197_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_2_i_197_variant_DataContents);
variablenode_ns_2_i_197_variant_DataContents->length = 6315;
variablenode_ns_2_i_197_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_2_i_197_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_197_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TypeDictionary");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Collects the data type descriptions of http://opcfoundation.org/UA/PackML");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 92LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TypeDictionary"),
UA_NODEID_NUMERIC(ns[0], 72LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
variablenode_ns_2_i_197_variant_DataContents->data = NULL;
variablenode_ns_2_i_197_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_2_i_197_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ns_packml_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 197LU)
);
}

/* NamespaceUri - ns=2;i=198 */

static UA_StatusCode function_ns_packml_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_198_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_198_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_198_variant_DataContents);
*variablenode_ns_2_i_198_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/PackML/Types.xsd");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_198_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A URI that uniquely identifies the dictionary.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 198LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_198_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ns_packml_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 198LU)
);
}

/* PackMLProductDataType - ns=2;i=191 */

static UA_StatusCode function_ns_packml_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_191_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_191_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_191_variant_DataContents);
*variablenode_ns_2_i_191_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='PackMLProductDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_191_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLProductDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 191LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLProductDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_191_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 191LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 82LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 191LU)
);
}

/* PackMLIngredientsDataType - ns=2;i=189 */

static UA_StatusCode function_ns_packml_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_189_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_189_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_189_variant_DataContents);
*variablenode_ns_2_i_189_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='PackMLIngredientsDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_189_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLIngredientsDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 189LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLIngredientsDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_189_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 189LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 80LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 189LU)
);
}

/* PackMLRemoteInterfaceDataType - ns=2;i=188 */

static UA_StatusCode function_ns_packml_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_188_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_188_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_188_variant_DataContents);
*variablenode_ns_2_i_188_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='PackMLRemoteInterfaceDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_188_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLRemoteInterfaceDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 188LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLRemoteInterfaceDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_188_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 188LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 84LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 188LU)
);
}

/* PackMLDescriptorDataType - ns=2;i=185 */

static UA_StatusCode function_ns_packml_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_185_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_185_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_185_variant_DataContents);
*variablenode_ns_2_i_185_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='PackMLDescriptorDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_185_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLDescriptorDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 185LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLDescriptorDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_185_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 185LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 78LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 185LU)
);
}

/* PackMLAlarmDataType - ns=2;i=183 */

static UA_StatusCode function_ns_packml_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_183_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_183_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_183_variant_DataContents);
*variablenode_ns_2_i_183_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='PackMLAlarmDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_183_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLAlarmDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 183LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLAlarmDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_183_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 183LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 76LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 183LU)
);
}

/* PackMLCountDataType - ns=2;i=181 */

static UA_StatusCode function_ns_packml_239_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_181_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_181_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_181_variant_DataContents);
*variablenode_ns_2_i_181_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='PackMLCountDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_181_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLCountDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 181LU),
UA_NODEID_NUMERIC(ns[2], 197LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLCountDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_181_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 181LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 70LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_239_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 181LU)
);
}

/* TypeDictionary - ns=2;i=195 */
static const UA_Byte variablenode_ns_2_i_195_variant_DataContents_byteArray[3067] = {60, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 32, 120, 109, 108, 110, 115, 58, 120, 115, 105, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 45, 105, 110, 115, 116, 97, 110, 99, 101, 34, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 80, 97, 99, 107, 77, 76, 47, 34, 32, 68, 101, 102, 97, 117, 108, 116, 66, 121, 116, 101, 79, 114, 100, 101, 114, 61, 34, 76, 105, 116, 116, 108, 101, 69, 110, 100, 105, 97, 110, 34, 32, 120, 109, 108, 110, 115, 58, 111, 112, 99, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 47, 34, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 32, 84, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 80, 97, 99, 107, 77, 76, 47, 34, 62, 10, 32, 60, 111, 112, 99, 58, 73, 109, 112, 111, 114, 116, 32, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 47, 62, 10, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 32, 78, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 65, 108, 97, 114, 109, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 73, 68, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 86, 97, 108, 117, 101, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 67, 104, 97, 114, 65, 114, 114, 97, 121, 34, 32, 78, 97, 109, 101, 61, 34, 77, 101, 115, 115, 97, 103, 101, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 67, 97, 116, 101, 103, 111, 114, 121, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 97, 116, 101, 84, 105, 109, 101, 34, 32, 78, 97, 109, 101, 61, 34, 68, 97, 116, 101, 84, 105, 109, 101, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 97, 116, 101, 84, 105, 109, 101, 34, 32, 78, 97, 109, 101, 61, 34, 65, 99, 107, 68, 97, 116, 101, 84, 105, 109, 101, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 66, 111, 111, 108, 101, 97, 110, 34, 32, 78, 97, 109, 101, 61, 34, 84, 114, 105, 103, 103, 101, 114, 34, 47, 62, 10, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 32, 78, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 67, 111, 117, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 73, 68, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 67, 104, 97, 114, 65, 114, 114, 97, 121, 34, 32, 78, 97, 109, 101, 61, 34, 78, 97, 109, 101, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 69, 85, 73, 110, 102, 111, 114, 109, 97, 116, 105, 111, 110, 34, 32, 78, 97, 109, 101, 61, 34, 85, 110, 105, 116, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 67, 111, 117, 110, 116, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 65, 99, 99, 67, 111, 117, 110, 116, 34, 47, 62, 10, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 32, 78, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 73, 68, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 67, 104, 97, 114, 65, 114, 114, 97, 121, 34, 32, 78, 97, 109, 101, 61, 34, 78, 97, 109, 101, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 69, 85, 73, 110, 102, 111, 114, 109, 97, 116, 105, 111, 110, 34, 32, 78, 97, 109, 101, 61, 34, 85, 110, 105, 116, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 70, 108, 111, 97, 116, 34, 32, 78, 97, 109, 101, 61, 34, 86, 97, 108, 117, 101, 34, 47, 62, 10, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 32, 78, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 73, 68, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 78, 111, 79, 102, 80, 97, 114, 97, 109, 101, 116, 101, 114, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 76, 101, 110, 103, 116, 104, 70, 105, 101, 108, 100, 61, 34, 78, 111, 79, 102, 80, 97, 114, 97, 109, 101, 116, 101, 114, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 78, 97, 109, 101, 61, 34, 80, 97, 114, 97, 109, 101, 116, 101, 114, 34, 47, 62, 10, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 32, 78, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 80, 114, 111, 100, 117, 99, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 73, 68, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 78, 111, 79, 102, 80, 114, 111, 99, 101, 115, 115, 86, 97, 114, 105, 97, 98, 108, 101, 115, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 76, 101, 110, 103, 116, 104, 70, 105, 101, 108, 100, 61, 34, 78, 111, 79, 102, 80, 114, 111, 99, 101, 115, 115, 86, 97, 114, 105, 97, 98, 108, 101, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 78, 97, 109, 101, 61, 34, 80, 114, 111, 99, 101, 115, 115, 86, 97, 114, 105, 97, 98, 108, 101, 115, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 78, 111, 79, 102, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 76, 101, 110, 103, 116, 104, 70, 105, 101, 108, 100, 61, 34, 78, 111, 79, 102, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 78, 97, 109, 101, 61, 34, 73, 110, 103, 114, 101, 100, 105, 101, 110, 116, 115, 34, 47, 62, 10, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 32, 78, 97, 109, 101, 61, 34, 80, 97, 99, 107, 77, 76, 82, 101, 109, 111, 116, 101, 73, 110, 116, 101, 114, 102, 97, 99, 101, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 78, 117, 109, 98, 101, 114, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 67, 111, 110, 116, 114, 111, 108, 67, 109, 100, 78, 117, 109, 98, 101, 114, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 67, 109, 100, 86, 97, 108, 117, 101, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 78, 111, 79, 102, 80, 97, 114, 97, 109, 101, 116, 101, 114, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 76, 101, 110, 103, 116, 104, 70, 105, 101, 108, 100, 61, 34, 78, 111, 79, 102, 80, 97, 114, 97, 109, 101, 116, 101, 114, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 116, 110, 115, 58, 80, 97, 99, 107, 77, 76, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 78, 97, 109, 101, 61, 34, 80, 97, 114, 97, 109, 101, 116, 101, 114, 34, 47, 62, 10, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 34, 51, 50, 34, 32, 78, 97, 109, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 77, 97, 105, 110, 116, 101, 110, 97, 110, 99, 101, 77, 111, 100, 101, 69, 110, 117, 109, 34, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 73, 110, 118, 97, 108, 105, 100, 34, 32, 86, 97, 108, 117, 101, 61, 34, 48, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 80, 114, 111, 100, 117, 99, 101, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 77, 97, 105, 110, 116, 101, 110, 97, 110, 99, 101, 34, 32, 86, 97, 108, 117, 101, 61, 34, 50, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 77, 97, 110, 117, 97, 108, 34, 32, 86, 97, 108, 117, 101, 61, 34, 51, 34, 47, 62, 10, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 60, 47, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 62, 10};



static UA_StatusCode function_ns_packml_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
UA_ByteString *variablenode_ns_2_i_195_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_2_i_195_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_2_i_195_variant_DataContents);
variablenode_ns_2_i_195_variant_DataContents->length = 3067;
variablenode_ns_2_i_195_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_2_i_195_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_195_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TypeDictionary");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Collects the data type descriptions of http://opcfoundation.org/UA/PackML");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 195LU),
UA_NODEID_NUMERIC(ns[0], 93LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TypeDictionary"),
UA_NODEID_NUMERIC(ns[0], 72LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
variablenode_ns_2_i_195_variant_DataContents->data = NULL;
variablenode_ns_2_i_195_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_2_i_195_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ns_packml_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 195LU)
);
}

/* NamespaceUri - ns=2;i=196 */

static UA_StatusCode function_ns_packml_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_196_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_196_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_196_variant_DataContents);
*variablenode_ns_2_i_196_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/PackML/");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_196_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A URI that uniquely identifies the dictionary.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 196LU),
UA_NODEID_NUMERIC(ns[2], 195LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_196_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ns_packml_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 196LU)
);
}

/* PackMLProductDataType - ns=2;i=190 */

static UA_StatusCode function_ns_packml_242_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_190_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_190_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_190_variant_DataContents);
*variablenode_ns_2_i_190_variant_DataContents = UA_STRING_ALLOC("PackMLProductDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_190_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLProductDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 190LU),
UA_NODEID_NUMERIC(ns[2], 195LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLProductDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_190_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 190LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 81LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 190LU)
);
}

/* PackMLRemoteInterfaceDataType - ns=2;i=187 */

static UA_StatusCode function_ns_packml_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_187_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_187_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_187_variant_DataContents);
*variablenode_ns_2_i_187_variant_DataContents = UA_STRING_ALLOC("PackMLRemoteInterfaceDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_187_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLRemoteInterfaceDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 187LU),
UA_NODEID_NUMERIC(ns[2], 195LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLRemoteInterfaceDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_187_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 187LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 83LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 187LU)
);
}

/* PackMLIngredientsDataType - ns=2;i=186 */

static UA_StatusCode function_ns_packml_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_186_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_186_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_186_variant_DataContents);
*variablenode_ns_2_i_186_variant_DataContents = UA_STRING_ALLOC("PackMLIngredientsDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_186_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLIngredientsDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 186LU),
UA_NODEID_NUMERIC(ns[2], 195LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLIngredientsDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_186_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 186LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 79LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 186LU)
);
}

/* PackMLDescriptorDataType - ns=2;i=184 */

static UA_StatusCode function_ns_packml_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_184_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_184_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_184_variant_DataContents);
*variablenode_ns_2_i_184_variant_DataContents = UA_STRING_ALLOC("PackMLDescriptorDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_184_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLDescriptorDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 184LU),
UA_NODEID_NUMERIC(ns[2], 195LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLDescriptorDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_184_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 184LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 77LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 184LU)
);
}

/* PackMLAlarmDataType - ns=2;i=182 */

static UA_StatusCode function_ns_packml_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_182_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_182_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_182_variant_DataContents);
*variablenode_ns_2_i_182_variant_DataContents = UA_STRING_ALLOC("PackMLAlarmDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_182_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLAlarmDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 182LU),
UA_NODEID_NUMERIC(ns[2], 195LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLAlarmDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_182_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 182LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 74LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 182LU)
);
}

/* PackMLCountDataType - ns=2;i=180 */

static UA_StatusCode function_ns_packml_247_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_180_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_180_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_180_variant_DataContents);
*variablenode_ns_2_i_180_variant_DataContents = UA_STRING_ALLOC("PackMLCountDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_180_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PackMLCountDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 180LU),
UA_NODEID_NUMERIC(ns[2], 195LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PackMLCountDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_2_i_180_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 180LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 69LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_ns_packml_247_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 180LU)
);
}

UA_StatusCode ns_packml(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[3];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/DI/");
ns[2] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/PackML/");

/* Load custom datatype definitions into the server */
if((retVal = function_ns_packml_0_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_0_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_1_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_1_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_2_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_2_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_3_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_3_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_4_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_4_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_5_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_6_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_7_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_8_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_9_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_10_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_11_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_12_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_13_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_14_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_15_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_16_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_17_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_18_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_19_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_20_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_21_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_22_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_23_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_24_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_25_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_26_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_27_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_28_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_29_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_30_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_31_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_32_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_33_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_34_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_35_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_36_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_37_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_38_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_39_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_40_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_41_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_42_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_43_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_44_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_45_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_46_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_47_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_48_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_49_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_50_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_51_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_52_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_53_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_54_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_55_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_56_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_57_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_58_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_59_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_60_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_61_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_62_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_63_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_64_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_65_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_66_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_67_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_68_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_69_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_70_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_71_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_72_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_73_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_74_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_75_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_76_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_77_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_78_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_79_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_80_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_81_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_82_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_83_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_84_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_85_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_86_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_87_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_88_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_89_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_90_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_91_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_92_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_93_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_94_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_95_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_96_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_97_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_98_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_99_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_100_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_101_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_102_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_103_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_104_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_105_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_106_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_107_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_108_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_109_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_110_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_111_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_112_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_113_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_114_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_115_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_116_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_117_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_118_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_119_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_120_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_121_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_122_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_123_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_124_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_125_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_126_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_127_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_128_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_129_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_130_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_131_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_132_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_133_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_134_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_135_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_136_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_137_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_138_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_139_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_140_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_141_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_142_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_143_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_144_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_145_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_146_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_147_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_148_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_149_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_150_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_151_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_152_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_153_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_154_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_155_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_156_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_157_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_158_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_159_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_160_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_161_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_162_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_163_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_164_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_165_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_166_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_167_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_168_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_169_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_170_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_171_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_172_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_173_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_174_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_175_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_176_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_177_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_178_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_179_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_180_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_181_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_182_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_183_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_184_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_185_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_186_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_187_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_188_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_189_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_190_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_191_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_192_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_193_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_194_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_195_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_196_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_197_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_198_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_199_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_200_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_201_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_202_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_203_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_204_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_205_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_206_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_207_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_208_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_209_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_210_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_211_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_212_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_213_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_214_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_215_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_216_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_217_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_218_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_219_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_220_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_221_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_222_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_223_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_224_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_225_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_226_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_227_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_228_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_229_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_230_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_231_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_232_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_233_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_234_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_235_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_236_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_237_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_238_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_239_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_240_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_241_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_242_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_243_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_244_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_245_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_246_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_247_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_247_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_246_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_245_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_244_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_243_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_242_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_241_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_240_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_239_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_238_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_237_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_236_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_235_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_234_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_233_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_232_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_231_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_230_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_229_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_228_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_227_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_226_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_225_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_224_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_223_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_222_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_221_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_220_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_219_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_218_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_217_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_216_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_215_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_214_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_213_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_212_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_211_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_210_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_209_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_208_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_207_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_206_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_205_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_204_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_203_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_202_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_201_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_200_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_199_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_198_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_197_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_196_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_195_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_194_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_193_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_192_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_191_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_190_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_189_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_188_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_187_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_186_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_185_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_184_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_183_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_182_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_181_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_180_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_179_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_178_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_177_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_176_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_175_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_174_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_173_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_172_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_171_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_170_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_169_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_168_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_167_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_166_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_165_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_164_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_163_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_162_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_161_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_160_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_159_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_158_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_157_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_156_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_155_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_154_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_153_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_152_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_151_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_150_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_149_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_148_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_147_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_146_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_145_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_144_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_143_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_142_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_141_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_140_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_139_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_138_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_137_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_136_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_135_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_134_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_133_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_132_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_131_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_130_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_129_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_128_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_127_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_126_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_125_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_124_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_123_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_122_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_121_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_120_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_119_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_118_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_117_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_116_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_115_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_114_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_113_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_112_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_111_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_110_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_109_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_108_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_107_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_106_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_105_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_104_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_103_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_102_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_101_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_100_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_99_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_98_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_97_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_96_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_95_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_94_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_93_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_92_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_91_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_90_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_89_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_88_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_87_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_86_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_85_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_84_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_83_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_82_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_81_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_80_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_79_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_78_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_77_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_76_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_75_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_74_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_73_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_72_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_71_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_70_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_69_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_68_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_67_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_66_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_65_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_64_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_63_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_62_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_61_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_60_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_59_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_58_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_57_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_56_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_55_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_54_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_53_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_52_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_51_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_50_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_49_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_48_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_47_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_46_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_45_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_44_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_43_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_42_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_41_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_40_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_39_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_38_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_37_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_36_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_35_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_34_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_33_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_32_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_31_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_30_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_29_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_28_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_27_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_26_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_25_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_24_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_23_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_22_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_21_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_20_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_19_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_18_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_17_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_16_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_15_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_14_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_13_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_12_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_11_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_10_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_9_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_8_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_7_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_6_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ns_packml_5_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}
