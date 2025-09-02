bits 16
org 0x7C00

xor ax, ax
mov ds, ax
mov es, ax
mov ss, ax
mov sp, 0x7C00

mov si, hello

print:
    lodsb
    or al, al
    jz halt
    mov ah, 0x0e
    int 0x10
    jmp print

halt:
    jmp $

hello: db "This bootloader is written in Assembly.", 0

times 510 - ($ - $$) db 0
dw 0xAA55
