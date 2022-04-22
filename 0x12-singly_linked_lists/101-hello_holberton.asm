section .text
	extern printf
	global main

main:
	mov rdi, formatStr
	mov al, 0
	call printf
	ret

section .data
formatStr:
	db `Hello, Holberton\n`, 0
