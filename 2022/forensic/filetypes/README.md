1. download pdf files
2. check the typeof files
3. the file is compressed
4. we can decompress using binwalk -e Flag.pdf
5. cd into extractions folder
6. we can see symlink in folder extractions
7. we analyze file decompress.bin
8. if the file type is gzip, we rename it into .gz then gzip -d filename
9. if the file type is lzip, we can decompress it using xz -d
10. lzma use lzma
11. lzof use lzof, etc
12. until we get ascii text,
13. we can execute this command
14. xxd -r -p fileascii > flag.txt
