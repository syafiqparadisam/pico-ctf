1. kita diberikan %ebp yaitu 0x2e0 = 736
2. lalu kita disuruh mengcompare dengan 0x3fb if (736 > 1019)
3. tidak, kita lanjut eksekusi baris selanjutnya yaitu mengcompare if (736 != 640)
4. ya, kita jump ke program ke +29, yang mana dia memindahkan variable ke eax, dan substraction dengan 0xA = 10,
5. jadi kita harus mengurangi 736 - 10
6. 726, hexadecimal 726 yaitu 0x2d6
7. flag adalah 0x2d6
