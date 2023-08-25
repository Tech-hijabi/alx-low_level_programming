section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    global main
    extern printf

main:
    mov edi, format 
    xor eax, eax
    call printf
    mov     eax, 0
    ret
