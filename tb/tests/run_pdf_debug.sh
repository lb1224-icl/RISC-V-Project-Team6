#!/bin/bash

# Script to run PDF test in debug mode
# This will help identify where the PDF test fails

SCRIPT_DIR=$(dirname "$(realpath "$0")")
TB_DIR=$(dirname "$SCRIPT_DIR")
RTL_FOLDER=$(realpath "$TB_DIR/../rtl")

cd "$TB_DIR"

echo "=========================================="
echo "PDF Test Debug Mode"
echo "=========================================="
echo ""

# Clean previous test output
echo "Cleaning previous test output..."
rm -rf test_out/5_pdf/*

# Run the debug test
echo "Running PDF debug test..."
echo ""

./doit.sh tests/verify_pdf_debug.cpp

echo ""
echo "=========================================="
echo "Debug test complete!"
echo "=========================================="
echo ""
echo "Check the following files:"
echo "1. test_out/5_pdf/diagnostic.txt - Diagnostic report"
echo "2. test_out/5_pdf/waveform.vcd - Waveform file (open in GTKWave)"
echo "3. test_out/5_pdf/program.hex - Program memory"
echo "4. test_out/5_pdf/data.hex - Data memory"
echo ""
echo "To view the waveform:"
echo "  gtkwave test_out/5_pdf/waveform.vcd"
echo ""

