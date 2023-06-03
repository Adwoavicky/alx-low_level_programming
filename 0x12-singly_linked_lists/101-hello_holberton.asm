hello db "Hello, Holberton\n", 0

global main
extern printf

main:
   sub rsp, 8
   mov rsi, hello
   xor eax, eax
   call printf

   add rsp, 8
   xor eax, eax
   ret
