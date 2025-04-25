def decode_flag(encoded_str):
    return ''.join([chr(ord(c) >> 8) + chr(ord(c) & 0xFF) for c in encoded_str])

# Contoh penggunaan
encoded = '灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸強㕤㐸㤸扽'  # Hasil dari encoding "ABCD"
decoded = decode_flag(encoded)
print(decoded)  # Output: ABCD
