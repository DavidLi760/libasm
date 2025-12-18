global ft_read
extern __errno_location

section .text
ft_read:
	xor rax, rax
	syscall
 	test rax, rax
	js .syscall_error
	ret

.syscall_error:
	neg rax
	mov rdi, rax
	call __errno_location wrt ..plt
	mov [rax], rdi
	mov rax, -1
	ret

