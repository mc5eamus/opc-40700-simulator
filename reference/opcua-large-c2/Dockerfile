# Build stage: compile open62541 and the C simulator with all 4 Koerber
# MCC nodesets statically linked. Generated nodeset .c files are produced
# offline (see scripts/regenerate-nodesets.sh) and committed.
FROM debian:13-slim AS build

RUN apt-get update -qq && \
    apt-get install -y --no-install-recommends \
        build-essential cmake git ca-certificates python3 python3-lxml \
        libssl-dev && \
    rm -rf /var/lib/apt/lists/*

# Build open62541 (UA_NAMESPACE_ZERO=FULL is needed for the DI/PackML/TMC
# vendor nodesets to find their dependencies in ns=0).
WORKDIR /opt
ARG OPEN62541_REF=v1.4.13
RUN git clone --depth 1 -b ${OPEN62541_REF} https://github.com/open62541/open62541.git
WORKDIR /opt/open62541
RUN mkdir build && cd build && \
    cmake -DUA_NAMESPACE_ZERO=FULL -DBUILD_SHARED_LIBS=OFF \
          -DCMAKE_BUILD_TYPE=Release -DUA_ENABLE_NODESET_INJECTOR=OFF \
          -DUA_BUILD_EXAMPLES=OFF -DUA_ENABLE_ENCRYPTION=OPENSSL .. && \
    make -j$(nproc) open62541

# Build the simulator. Generated nodeset C source must already be present
# under nodesets-generated/.
WORKDIR /src
COPY CMakeLists.txt /src/
COPY src/ /src/src/
COPY nodesets-generated/ /src/nodesets-generated/
RUN mkdir build && cd build && \
    cmake -DOPEN62541_DIR=/opt/open62541 .. && \
    make -j$(nproc)

# Runtime stage: minimal Debian with just libc.
FROM debian:13-slim
RUN apt-get update -qq && \
    apt-get install -y --no-install-recommends ca-certificates libssl3 && \
    rm -rf /var/lib/apt/lists/*
COPY --from=build /src/build/opcua-large-c2 /usr/local/bin/opcua-large-c2

# Per-machine model: each container runs ONE Koerber MCC variant on its
# variant-specific port (4840-4843). Selection via MCC_VARIANT env.
EXPOSE 4840 4841 4842 4843
ENTRYPOINT ["/usr/local/bin/opcua-large-c2"]
