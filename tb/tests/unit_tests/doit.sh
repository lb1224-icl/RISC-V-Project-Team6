#!/bin/bash

# Run cache/MMU unit tests under GoogleTest + Verilator

SCRIPT_DIR=$(dirname "$(realpath "$0")")
TEST_DIR="$SCRIPT_DIR"
RTL_DIR=$(realpath "$SCRIPT_DIR/../../../rtl/memory")

GREEN=$(tput setaf 2)
RED=$(tput setaf 1)
RESET=$(tput sgr0)

echo "Running cache/MMU unit tests..."
echo "RTL directory: $RTL_DIR"

# Make script executable-friendly
mkdir -p "$TEST_DIR/obj_dir"
mkdir -p "$TEST_DIR/test_out"

passes=0
fails=0

# Find all *_tb.cpp testbenches
FILES=("$TEST_DIR"/*/*_tb.cpp)

if [[ ${#FILES[@]} -eq 0 ]]; then
    echo "${RED}No *_tb.cpp files found!${RESET}"
    exit 1
fi

for tb in "${FILES[@]}"; do
    name=$(basename "$tb" _tb.cpp)

    echo ""
    echo "======================================"
    echo "   Building testbench: ${GREEN}${name}${RESET}"
    echo "======================================"

    # Clean obj_dir
    rm -rf "$TEST_DIR/obj_dir"

    # Run Verilator with warning suppression
    verilator \
        -Wall \
        -Wno-WIDTH \
        -Wno-UNOPTFLAT \
        -Wno-LITENDIAN \
        -Wno-MODDUP \
        -Wno-CASEINCOMPLETE \
        -Wno-UNUSED \
        -Wno-BLKANDNBLK \
        -Wno-BLKSEQ \
        -Wno-DECLFILENAME \
        --trace \
        -cc "$RTL_DIR/mmu.sv" \
        --exe "$tb" \
        -y "$RTL_DIR" \
        --prefix "Vmmu" \
        -o Vmmu \
        -LDFLAGS "-lgtest -lgtest_main -lpthread"

    if [[ $? -ne 0 ]]; then
        echo "${RED}Verilator failed!${RESET}"
        ((fails++))
        continue
    fi

    make -j -C "$TEST_DIR/obj_dir" -f Vmmu.mk

    if [[ $? -ne 0 ]]; then
        echo "${RED}Build failed!${RESET}"
        ((fails++))
        continue
    fi

    # Run executable
    echo "Running $name..."
    "$TEST_DIR/obj_dir/Vmmu"

    if [[ $? -eq 0 ]]; then
        echo "${GREEN}PASS${RESET}"
        ((passes++))
    else
        echo "${RED}FAIL${RESET}"
        ((fails++))
    fi
done

echo ""
echo "======================================"
echo "           TEST SUMMARY"
echo "======================================"
echo " Passes: ${GREEN}${passes}${RESET}"
echo " Fails:  ${RED}${fails}${RESET}"
echo "======================================"

exit $fails
