section .data
	hello_msg db "Hello, Holborton", 0
	format db "%s", 0


section .text
	extern printf

global _start


-start:
	; Prepare arguments for printf
	mov rdi, format
	mov rsi, hello_msg
	xor eax, eax  ; Clear EAX register to indicate no floating-point arguments
	call printf

	; Exit the program
	mov eax, 60	; System call number for rxit
	xor edi, edi	; Exit status code 0
	sysCall
