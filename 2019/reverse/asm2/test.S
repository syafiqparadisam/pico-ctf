asm2:
	<+0>:	push   ebp
	<+1>:	mov    ebp,esp
	<+3>:	sub    esp,0x10
	<+6>:	mov    eax,DWORD PTR [ebp+0xc] ; memindahkan argumen fungsi ke register eax yaitu nilai 0xb ke eax
	<+9>:	mov    DWORD PTR [ebp-0x4],eax ; memindahkan register eax ke variabel lokal dalam fungsi 
	<+12>:	mov    eax,DWORD PTR [ebp+0x8] ; memindahkan argumen fungsi ke register eax yaitu nilai 0x2e ke eax
	<+15>:	mov    DWORD PTR [ebp-0x8],eax ; memindahkan register eax ke variabel lokal dalam fungsi
	<+18>:	jmp    0x509 <asm2+28> ; jump ke baris 28
	<+20>:	add    DWORD PTR [ebp-0x4],0x1 ; menambahkan variabel ebp-0x4 dengan 1
	<+24>:	sub    DWORD PTR [ebp-0x8],0xffffff80 ; mengurangi variabel ebp-0x8 dengan 4294967168
	<+28>:	cmp    DWORD PTR [ebp-0x8],0x63f3 ; if 46 <= 25587
	<+35>:	jle    0x501 <asm2+20> ; lompat ke baris 20
	<+37>:	mov    eax,DWORD PTR [ebp-0x4] ; memindahkan variabel ebp-0x4 ke eax
	<+40>:	leave  
	<+41>:	ret    

