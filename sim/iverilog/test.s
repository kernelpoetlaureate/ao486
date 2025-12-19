[bits 32]
section .text
global _start

_start:
    mov eax, 55      ; Your instruction
        add eax, 10      ; Result should be 65 (0x41)
            hlt              ; Stop
