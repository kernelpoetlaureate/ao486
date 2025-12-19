#!/bin/bash
echo "Building ao486 simulation..."
echo "============================"

# Clean up
rm -f ao486_sim tb_ao486.vvp dump.vcd

# Build with ALL necessary paths
iverilog -o ao486_sim \
  -y./../../../rtl \
  -y./../../../rtl/ao486 \
  -y./../../../rtl/ao486/memory \
  -y./../../../rtl/ao486/pipeline \
  -y./../../../rtl/common \
  -I./../../../rtl \
  -I./../../../rtl/ao486 \
  -I./../../../rtl/common \
  tb_ao486.v

if [ $? -eq 0 ]; then
    echo "✓ Compilation successful!"
    echo "Running simulation..."
    vvp ao486_sim
else
    echo "✗ Compilation failed"
fi
