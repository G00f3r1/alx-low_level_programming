extern printf

section .data
	msg db "Hello, Holberton", 0
	nl: db "%s", 10, 0
section .text
    global main

main:
    push rbp

    mov rdi,nl
    mov rsi,msg
    mov rdx,0
    call printf

    pop rbp

    mov rax,0
    ret
end:
