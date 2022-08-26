# READ ME

This project is just a simple program that reads in raw shell code to be executed,
and can be a good place to start when wanting to stand up text environments for 
developing shellcode in complicated environments.

To run shellcode that produces a shell that persists run like:
`(cat shellcode; cat ) | ./shellcode_runner`

- shellcode for this was compiled using: `gcc -nostdlib -static shellcode.s -o shellcode-elf`
- the raw shellcode was obtained using: `objcopy --dump-section .text=shellcode shellcode-elf`

credit to Yan from pwn.college for the education content that inspired this