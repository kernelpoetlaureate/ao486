import re
import sys

try:
    with open('main.cpp', 'r') as f:
        content = f.read()

    print("Processing main.cpp...")

    # --- FIX 1: Verilator API ---
    content = content.replace('rolloverMB', 'rolloverSize')
    print("  ✓ Fixed rolloverSize")

    # --- FIX 2: SDRAM -> AVM Signal Mapping ---
    # These signals were renamed in the RTL, so we rename them in the C++ testbench
    avm_map = [
        ('->sdram_address',       '->avm_address'),
        ('->sdram_writedata',     '->avm_writedata'),
        ('->sdram_byteenable',    '->avm_byteenable'),
        ('->sdram_burstcount',    '->avm_burstcount'),
        ('->sdram_write',         '->avm_write'),
        ('->sdram_read',          '->avm_read'),
        ('->sdram_readdata',      '->avm_readdata'),
        ('->sdram_readdatavalid', '->avm_readdatavalid'),
        ('->sdram_waitrequest',   '->avm_waitrequest')
    ]
    for old, new in avm_map:
        content = content.replace(old, new)
    print("  ✓ Mapped SDRAM signals to AVM")

    # --- FIX 3: Disable VGA Signals ---
    # The VGA signals (vga_address, vga_read, etc.) have been removed from the top module.
    # Instead of commenting out blocks (which risks breaking braces), we:
    # 1. Comment out ASSIGNMENTS to these signals (lvalues)
    # 2. Replace READS from these signals with '0' (rvalues)
    
    # Comment out writes: "top->vga_xxx = ..." -> "// top->vga_xxx = ..."
    # We use regex to catch assignments.
    content = re.sub(r'(top->vga_\w+\s*=)', r'// \1', content)
    
    # Replace reads: "top->vga_xxx" -> "0"
    # This turns "if(top->vga_read)" into "if(0)", cleanly disabling the block.
    # It turns "val = top->vga_address" into "val = 0", which is valid C++.
    content = re.sub(r'top->vga_\w+', '0', content)
    
    print("  ✓ Zeroed out VGA signals (Clean Disable)")

    # --- FIX 4: Disable Debug/Finish instruction ---
    # Same strategy: map the signal read to 0
    content = content.replace('top->tb_finish_instr', '0')
    
    # Also disable the break; statement associated with it to prevent early exit
    # We look for the specific break usually found inside that block
    content = re.sub(r'break;\s*// tb_finish_instr', '// break; // tb_finish_instr', content)
    
    print("  ✓ Disabled tb_finish_instr")

    with open('main.cpp', 'w') as f:
        f.write(content)
        
    print("Success: main.cpp patched.")

except Exception as e:
    print(f"Error: {e}")
    sys.exit(1)
