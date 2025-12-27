extern ft_strlen
extern ft_strcpy
extern malloc

global ft_strdup

section .text
; char *ft_strdup(const char *s1);
ft_strdup:
    push rdi                ; save s1

    call ft_strlen
    inc rax                 ; len + 1
    mov rdi, rax
    call malloc wrt ..plt

    test rax, rax
    je .malloc_error

    mov rdi, rax            ; dest
    pop rsi                 ; src
    call ft_strcpy

    ret

.malloc_error:
    pop rdi                 ; clean stack
    xor rax, rax            ; return NULL
    ret
