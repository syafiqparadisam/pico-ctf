	
section .text
	global _start

_start:
    ; Setup parameter (p1, p2, p3)
    push dword 0xbb86a173  ; p3
    push dword 0xd101e3dd  ; p2
    push dword 0xba6c5a02  ; p1
    call asm3
    add esp, 12            ; Bersihkan stack setelah call

    ; Simpan hasil di memori (opsional)
;    mov [res], ax

    ; Exit program
    mov eax, 1   ; syscall exit
    xor ebx, ebx
    int 0x80

asm3:
  	push   ebp ; push stack
	mov    ebp, esp ; mov saved ebp
	xor    eax, eax ; hilangkan register eax
	mov    ah, byte [ebp+0xb] ; pindah ebp+0xb ke register ah
	shl    ax, 0x10 ; shiftleft 16bit register ax
	sub    al, byte [ebp+0xd] ; kurangkan ebp+0xd
	add    ah, byte [ebp+0xc]
	xor    ax, byte [ebp+0x12]
	nop
	pop    ebp
	ret    

