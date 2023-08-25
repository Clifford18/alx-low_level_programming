    format db 'Hello, World!',0

    global main
    extern printf

main:
    mov edi, format
    xor eax, eax
    call printf
    xor eax, eax
    ret
