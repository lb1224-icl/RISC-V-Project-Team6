#!/bin/bash
set -e

if [[ $# -lt 1 ]]; then
    echo "Usage: $0 <testbench_cpp>"
    exit 1
fi

TB_FILE="$1"

SCRIPT_DIR=$(dirname "$(realpath "$0")")
cd "$SCRIPT_DIR"

export CCACHE_DISABLE=1

TB_PATH=$(realpath "$TB_FILE" 2>/dev/null || true)
if [[ ! -f "$TB_PATH" ]]; then
    echo "ERROR: Testbench file not found: $TB_FILE"
    exit 1
fi

# Parse config lines from the .cpp:
# // TOP: <module>
# // RTL: <path>
TOP_MODULE=$(grep -m1 -E '^[[:space:]]*//[[:space:]]*TOP:' "$TB_PATH" | sed -E 's/.*TOP:[[:space:]]*([^[:space:]]+).*/\1/')
RTL_REL=$(grep -m1 -E '^[[:space:]]*//[[:space:]]*RTL:' "$TB_PATH" | sed -E 's/.*RTL:[[:space:]]*(.*)$/\1/' | xargs)

if [[ -z "$TOP_MODULE" || -z "$RTL_REL" ]]; then
    echo "ERROR: Missing config in $TB_FILE"
    echo "Add these two lines at the top of the file:"
    echo "  // TOP: <top_module_name>"
    echo "  // RTL: <path/to/module.sv>"
    exit 1
fi

RTL_PATH=$(realpath "$RTL_REL" 2>/dev/null || true)
if [[ ! -f "$RTL_PATH" ]]; then
    echo "ERROR: RTL file not found: $RTL_REL"
    echo "Resolved path: $RTL_PATH"
    exit 1
fi

PREFIX="V${TOP_MODULE}"
BIN="${PREFIX}"

echo "Top module : $TOP_MODULE"
echo "RTL file   : $RTL_PATH"
echo "Testbench  : $TB_PATH"
echo "Prefix/Bin : $PREFIX"

# Clean previous build
rm -rf obj_dir

# Verilator
verilator -Wall --trace \
    -cc "$RTL_PATH" \
    --top-module "$TOP_MODULE" \
    --exe "$TB_PATH" \
    --prefix "$PREFIX" \
    -o "$BIN" \
    -LDFLAGS "-lgtest -lgtest_main -lpthread" \
    -Wno-fatal \
    -Wno-WIDTH \
    -Wno-UNOPTFLAT \
    -Wno-LITENDIAN \
    -Wno-MODDUP \
    -Wno-CASEINCOMPLETE \
    -Wno-UNUSED \
    -Wno-BLKANDNBLK \
    -Wno-DECLFILENAME \
    -Wno-BLKSEQ \
    -Wno-PINCONNECTEMPTY

# Build
make -j -C obj_dir -f "${PREFIX}.mk" "$BIN"

# Run
./obj_dir/"$BIN"
