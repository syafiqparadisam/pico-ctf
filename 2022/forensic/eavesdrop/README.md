1. Cari dimana data sus berada, seperti di foto wireshark ini
2. lalu ada data yang tersalted sepertinya hash" an
3. kalau di strings capture.flag.txt
4. sepertinya menggunakan algoritma des3 openssl
5. copy data salted tadi menjadi hex lalu simpan di file.des3
6. jadikan binary dengan xxd -r -p file.des3 > file_fixed.des3
7. akhirnya file_fixed.des3 menjadi binary
8. tinggal dekripsi dengan openssl des3 -d -salt -in file_fixed.des3 -out file.txt -k supersecretpassword123 
9. flag akan keluar di file.txt
