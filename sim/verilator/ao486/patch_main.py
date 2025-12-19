import sys
import re

try:
    with open('main.cpp', 'r') as f:
        content = f.read()

    print("Processing main.cpp...")

    # FIX 1: Verilator API Change
    if 'rolloverMB' in content:
        content = content.replace('rolloverMB', 'rolloverSize')
        print("  ✓ Fixed rolloverSize")

    # FIX 2: SDRAM -> AVM Signal Mapping
    # We use explicit strings to ensure we don't accidentally replace substrings
    replacements = [
        ('->sdram_address',      '->avm_address'),
        ('->sdram_writedata',    '->avm_writedata'),
        ('->sdram_byteenable',   '->avm_byteenable'),
        ('->sdram_burstcount',   '->avm_burstcount'),
        ('->sdram_write',        '->avm_write'),
        ('->sdram_read',         '->avm_read'),
        ('->sdram_readdata',     '->avm_readdata'),
        ('->sdram_readdatavalid','->avm_readdatavalid'),
        ('->sdram_waitrequest',  '->avm_waitrequest')
    ]
    
    for old, new in replacements:
        if old in content:
            content = content.replace(old, new)
    print("  ✓ Mapped SDRAM signals to AVM")

    # FIX 3: Disable VGA safely (Prevent "0datavalid" syntax errors)
    # Instead of replacing variables with 0, we disable the IF conditions
    
    # Disable "if(top->vga_read)"
    content = content.replace('if(top->vga_read)', 'if(0) // DISABLED: top->vga_read')
    
    # Disable "if(top->vga_write)"
    content = content.replace('if(top->vga_write)', 'if(0) // DISABLED: top->vga_write')
    
    # Disable "if(vga_read_count > 0)"
    content = content.replace('if(vga_read_count > 0)', 'if(0) // DISABLED: vga_read_count')

    # Comment out assignments to missing VGA signals
    # Regex explains: Find 'top->vga_xxx = ...;' and comment it out
    content = re.sub(r'(top->vga_readdatavalid\s*=)', r'// \1', content)
    content = re.sub(r'(top->vga_readdata\s*=)', r'// \1', content)
    content = re.sub(r'(top->vga_waitrequest\s*=)', r'// \1', content)
    
    print("  ✓ Safely disabled VGA logic")

    # FIX 4: Disable Debug/Finish instruction
    content = content.replace('if(top->tb_finish_instr)', 'if(0) // DISABLED: tb_finish_instr')
    print("  ✓ Safely disabled tb_finish_instr")

    with open('main.cpp', 'w') as f:
        f.write(content)
    
    print("Success: main.cpp updated.")

except Exception as e:
    print(f"Python Error: {e}")
    sys.exit(1)
