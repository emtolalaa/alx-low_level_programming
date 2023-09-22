global main
extern printf

main:
mov edi., format
xor eax, eax
call printf
move eax, 0
ret

format: fb 'Hello, Holberton\n', 0
