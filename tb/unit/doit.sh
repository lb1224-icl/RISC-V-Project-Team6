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

RTL_DIR=$(realpath "$SCRIPT_DIR/../../rtl")
DIV_RTL="$RTL_DIR/alu/div.sv"

if [[ ! -f "$DIV_RTL" ]]; then
    echo "ERROR: Could not find div.sv at: $DIV_RTL"
    exit 1
fi

echo "Using RTL:  $DIV_RTL"
echo "Testbench:  $TB_FILE"

# Clean previous build
rm -rf obj_dir

# Run Verilator
verilator -Wall --trace \
    -cc "$DIV_RTL" \
    --top-module div \
    --exe "$TB_FILE" \
    --prefix "Vdiv" \
    -o Vdiv \
    -LDFLAGS "-lgtest -lgtest_main -lpthread" \
    -Wno-fatal -Wno-WIDTH -Wno-UNOPTFLAT -Wno-LITENDIAN \
    -Wno-MODDUP -Wno-CASEINCOMPLETE -Wno-UNUSED -Wno-BLKANDNBLK \
    -Wno-DECLFILENAME -Wno-BLKSEQ -Wno-PINCONNECTEMPTY

# Build
make -j -C obj_dir -f Vdiv.mk Vdiv

# Run
./obj_dir/Vdiv
