global ft_strdup
extern ft_strlen
extern ft_strcpy
section .text

ft_strdup:
    push rsi
    push rdi

    call ft_strlen
    mov rcx, rax

    mov rdi, 0
    mov rsi, rcx
    mov rdx, 3
    mov r10, 0x22
    mov r8, -1
    mov r9, 0
    mov rax, 9
    syscall

    test rax, rax
    js _return_null
    mov rdi, rax

    pop rsi
    pop rdx
    call ft_strcpy

    mov rax, rdi
    ret

_return_null:
    xor rax, rax
    ret
