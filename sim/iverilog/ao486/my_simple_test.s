[BITS 16]
    org 0xFFF0      ; Start at reset vector offset
    
    ; At reset, CPU is at 0xFFFFFFF0 (CS=0xFFFF, IP=0xFFF0)
    ; We need to do a far jump to set CS properly
    jmp 0xF000:0x0000
    
    ; Pad to 16 bytes (typical reset vector size)
    times 16-($-$$) db 0x90  ; NOPs
    
    ; Now our actual code at linear address ~0x000F0000
    mov ax, 0xAAAA
    mov bx, 0x5555
    sub ax, bx      ; AX = AAAA - 5555 = 5555
    
    mov cx, 3
my_loop:
    inc ax
    dec cx
    jnz my_loop     ; Loop 3 times, AX becomes 5558
    
    hlt