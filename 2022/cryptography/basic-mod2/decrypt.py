from Crypto.Util.number import inverse

cipher = []

with open("message.txt", "r") as f:
    content = f.read()
    cipher = content.strip().split(" ")
    


plain = ""
for c in cipher:
    print(c)
    m = 41
    a = int(c) % m
    x = inverse(a, m)
    print(f"Modular inverse dari {a} mod {m} adalah {x}")
    
    if 1 <= x < 27:  # Jika hasil mod adalah 0-25, ubah ke huruf A-Z
        plain += chr(96 + x)
    elif 27 <= x < 37:  # Jika hasil mod adalah 26-35, tetap integer
        plain += str(chr(47 + (x - 26)))
    elif x == 37:  # Jika hasil mod adalah 36, ubah ke "_"
        plain += '_'


print("picoCTF{" + plain + "}")


