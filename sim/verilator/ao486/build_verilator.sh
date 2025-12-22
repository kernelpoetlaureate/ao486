#!/bin/bash
echo "Building with Verilator..."
echo "=========================="

verilator --trace -Wall --Wno-fatal -Wno-PINCONNECTEMPTY -Wno-EOFNEWLINE \
  -CFLAGS "-O3 -I./../../../sim_pc" \
  -LDFLAGS "-O3" \
  --prefix Vmain \
  --cc main_fixed.v \
  --exe ./main.cpp \
  -I./../../../rtl \
  -I./../../../rtl/ao486 \
  -I./../../../rtl/common \
  -I./../../../rtl/soc/pc_bus \
  -I./../../../rtl/ao486/memory \
  -I./../../../rtl/ao486/pipeline \
  --build

if [ $? -eq 0 ]; then
    echo "✓ Verilator build successful!"
    echo "Running simulation..."
    ./obj_dir/Vmain
else
    echo "✗ Verilator build failed"
fi
