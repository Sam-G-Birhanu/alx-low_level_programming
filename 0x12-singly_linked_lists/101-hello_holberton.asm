section .data
    msg db "Hello, Holberton", 0 ; Define a null-terminated string

section .text
    global main
    extern printf

main:
    ; Load arguments for printf
    mov esi, msg    ; Address of the message
    mov edi, fmt    ; Address of the format string

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 0      ; Set return value to 0
    ret

section .data
    fmt db "%s", 10, 0 ; Define a format string with a newline and null terminator
