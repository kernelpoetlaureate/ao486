[BITS 16]
    org 0xFFF0      ; Start at reset vector offset
    
    ; At reset, CPU is at 0xFFFFFFF0 (CS=0xFFFF, IP=0xFFF0)
    ; We need to do a far jump to set CS properly
    jmp 0xF000:0x0000
    
    ; Pad to 16 bytes (typical reset vector size)
    times 16-($-$$) db 0x90  ; NOPs
    
    ; Now our actual code at linear address ~0x000F0000
    mov ax, 0x1111
    mov bx, 0x2222
    add ax, bx
    
    mov cx, 5
my_loop:
    inc dx
    dec cx
    jnz my_loop
    
    hlt