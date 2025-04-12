cipher = "w1{1wq8/7376j.:"

dec_cipher = []

for c in cipher:
    dec_cipher.append(ord(c))

print(dec_cipher)
plain_text = ""


for index,d in enumerate(dec_cipher):
    if (index & 1) == 0:
        plain_text += chr(d - 5)
    else:
        plain_text += chr(d + 2)

print(plain_text)
