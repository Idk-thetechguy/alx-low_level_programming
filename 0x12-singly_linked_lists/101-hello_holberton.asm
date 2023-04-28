section .data
message db 'Hello, Holberton',0Ah ; message to print
len equ $-message ; length of message

section .text
global main
extern printf

main:
; initialize loop counter to 0
xor ecx, ecx

loop:
; print message
mov edi, message
xor eax, eax
call printf

; increment loop counter
inc ecx

; check if loop counter is less than 10
cmp ecx, 10
jl loop

; exit program
xor eax, eax
ret

