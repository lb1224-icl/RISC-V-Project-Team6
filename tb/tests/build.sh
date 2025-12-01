#!/bin/bash

# Cleanup
rm -rf obj_dir
rm -f cpu.vcd

~/Documents/iac/lab0-devtools/tools/attach_usb.sh

# Run Verilator from tb/tests/
verilator -Wall --cc --trace \
    -F filenames.f \
    --exe top_tb.cpp vbuddy.cpp verify.cpp \
    -o Vcpu

# Build
make -j -C obj_dir -f Vcpu.mk Vcpu

# Run simulation
obj_dir/Vcpu
