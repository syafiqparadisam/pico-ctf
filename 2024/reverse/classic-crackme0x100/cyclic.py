from pwn import *

p = process('./crackme100')
c = cyclic(42)
p.sendline(c)
print(c)
p.wait()
core = p.corefile
print(core.read(core.esp, 4))  # Menemukan offset yang benar

