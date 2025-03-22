build:
	nasm -f elf32 main.asm -o main.o

linking: build
	ld -m elf_i386 main.o -o main

run: linking
	./main
