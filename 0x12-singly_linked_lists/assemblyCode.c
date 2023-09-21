section		.test
	extern	printf
	global	main

main:
	mov		fil, msg
	mov		ex, 0
	call	printf

section
	msg db 'Hello, Holberton', 0xa, 0
