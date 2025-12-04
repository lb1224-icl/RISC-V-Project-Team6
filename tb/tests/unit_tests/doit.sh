#!/bin/bash

if [[ $# -lt 2 ]]; then
    echo "Usage: $0 <top_module_name> <folder_with_files_name>"
    exit 1
fi

# Paths
SCRIPT_DIR=$(dirname "$(realpath "$0")")
TEST_DIR="$SCRIPT_DIR"
RTL_DIR=$(realpath "$SCRIPT_DIR/../../../rtl")

TOP_NAME="$1"
TOP_SV="${TOP_NAME}.sv"
TOP_PATH=$(find "$RTL_DIR" -type f -name "$TOP_SV" | head -n 1)

if [[ -z "$TOP_PATH" ]]; then
    echo "ERROR: Could not find top module $TOP_SV in $RTL_DIR"
    exit 1
fi

FOLDER="$2"

# filenames.f must exist
FILELIST="$TEST_DIR/$FOLDER/filenames.f"

if [[ ! -f "$FILELIST" ]]; then
    echo "ERROR: filenames.f not found at $FILELIST"
    exit 1
fi

GREEN=$(tput setaf 2)
RED=$(tput setaf 1)
RESET=$(tput sgr0)

passes=0
fails=0

# Find all *_tb.cpp tests
TEST_BENCHES=("$TEST_DIR"/$FOLDER/*_tb.cpp)

if [[ ${#TEST_BENCHES[@]} -eq 0 ]]; then
    echo "ERROR: No *_tb.cpp files found in $TEST_DIR"
    exit 1
fi

# Clean previous runs
rm -rf "$TEST_DIR/$FOLDER/obj_dir"
rm -rf "$TEST_DIR/$FOLDER/test_out"
mkdir -p "$TEST_DIR/$FOLDER/test_out"

echo "Running tests for top: $TOP_NAME"

# Loop over each testbench
for tb in "${TEST_BENCHES[@]}"; do
    TB_NAME=$(basename "$tb")
    TB_BASE="${TB_NAME%_tb.cpp}"

    echo ""
    echo "==============================================="
    echo " Running testbench: $TB_NAME"
    echo "==============================================="

    cd "$TEST_DIR/$FOLDER"

    # Call Verilator
    verilator \
        -cc "$TOP_PATH" \
        --exe "$(realpath "$tb")" \
        -F "$FILELIST" \
        -y "$RTL_DIR" \
        --trace \
        --prefix "V${TOP_NAME}" \
        -o "V${TOP_NAME}" \
        -LDFLAGS "-lgtest -lgtest_main -lpthread" \
        -Wno-fatal -Wno-WIDTH -Wno-UNOPTFLAT -Wno-LITENDIAN \
        -Wno-MODDUP -Wno-CASEINCOMPLETE -Wno-UNUSED -Wno-BLKANDNBLK \
        -Wno-BLKSEQ \
        -Wno-DECLFILENAME

    if [[ $? -ne 0 ]]; then
        echo "${RED}Verilator Failed${RESET}"
        ((fails++))
        continue
    fi

    # Makefile location
    OBJ="$TEST_DIR/$FOLDER/obj_dir"
    MKFILE="$OBJ/V${TOP_NAME}.mk"

    # Copy TB into obj_dir so Makefile can find it
    cp "$tb" "$OBJ/"

    make -j -C "$OBJ" -f "$MKFILE"

    if [[ $? -ne 0 ]]; then
        echo "${RED}Build failed${RESET}"
        ((fails++))
        continue
    fi

    # Run executable
    "$OBJ/V${TOP_NAME}"

    if [[ $? -eq 0 ]]; then
        echo "${GREEN}PASS: $TB_NAME${RESET}"
        ((passes++))
    else
        echo "${RED}FAIL: $TB_NAME${RESET}"
        ((fails++))
    fi

done

echo ""
echo "================ SUMMARY ================"
echo " Passed: $passes"
echo " Failed: $fails"
echo "========================================="

if [[ $fails -ne 0 ]]; then
    exit 1
fi
exit 0