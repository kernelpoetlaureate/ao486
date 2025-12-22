[bits 32]
[org 0x7c00]

; Simple test program for ao486
; This will run at boot time like a bootloader

start:
    ; Set up segment registers
    mov ax, 0x0000
    mov ds, ax
    mov es, ax
    mov ss, ax
    mov sp, 0x7c00
    
    ; Test 1: Basic arithmetic
    mov eax, 100        ; Load 100 into EAX
    mov ebx, 50         ; Load 50 into EBX
    add eax, ebx        ; EAX should now be 150 (0x96)
    
    ; Test 2: More arithmetic
    mov ecx, 10         ; Load 10 into ECX
    mul ecx             ; EAX = EAX * ECX = 1500 (0x5DC)
    
    ; Test 3: Memory write
    mov dword [0x8000], eax   ; Write result to memory at 0x8000
    
    ; Test 4: Memory read
    mov edx, [0x8000]   ; Read it back into EDX
    
    ; Test 5: Conditional jump
    cmp edx, eax        ; Compare EDX and EAX
    je equal            ; Jump if equal
    
    ; Should not reach here
    mov esi, 0xDEAD
    jmp done
    
equal:
    mov esi, 0xBEEF     ; Success marker
    
done:
    ; Infinite loop (halt)
    hlt
    jmp done

; Boot signature
times 510-($-$$) db 0
dw 0xAA55
