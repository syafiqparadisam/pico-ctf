1. Pahami syntax %rbp
2. %rbp adalah variabel lokal semisal 
int a;
char[] b;
3. dalam kasus tersebut %rbp bernilai 0x9fe1a = 654874
4. lalu masuk ke perintah if dan program jump ke main +37
5. kemudian di blok sana, %rbp di sub / dikurangi dengan 0x65, yang mana 0x65 adalah 101
6. jadi flagnya %rbp - 101
7. 654874 - 101
8. 654773
