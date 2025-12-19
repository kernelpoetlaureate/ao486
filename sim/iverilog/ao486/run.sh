#!/bin/bash

# --- Configuration ---
TOP_DIR="../../../rtl"
TB_FILE="simple_test.v"
ASM_FILE="test.s"
OUT_VVP="simple_test.vvp"

echo "========================================"
echo "  ao486 Automated Simulation Script"
echo "========================================"

# 1. Assemble the test code
echo "[1/4] Assembling $ASM_FILE..."
nasm -f bin $ASM_FILE -o test.bin
if [ $? -ne 0 ]; then echo "ASM Failed"; exit 1; fi

# 2. Convert to Hex for Verilog $readmemh
echo "[2/4] Generating test.hex..."
hexdump -v -e '1/4 "%08x\n"' test.bin > test.hex

# 3. Compile the Verilog RTL
echo "[3/4] Compiling RTL with iverilog..."
iverilog -o $OUT_VVP -g2012 \
    -I $TOP_DIR/ao486 \
    -I $TOP_DIR/ao486/autogen \
    -y $TOP_DIR/ao486 \
    -y $TOP_DIR/ao486/pipeline \
    -y $TOP_DIR/ao486/memory \
    -y $TOP_DIR/common \
    $TB_FILE $TOP_DIR/ao486/ao486.v

if [ $? -ne 0 ]; then echo "Compilation Failed"; exit 1; fi

# 4. Run the simulation
echo "[4/4] Running Simulation..."
vvp $OUT_VVP

echo "========================================"
echo "Simulation Complete."
echo "To view waveforms: gtkwave simple.vcd"