a = []
with open('message.txt', 'r') as file:
    content = file.read()
    a = content.split()

a = [int(x) for x in a]

result = []
for i, listmod in enumerate(a):
    mod = listmod % 37
    if 0 <= mod < 26:  # Jika hasil mod adalah 0-25, ubah ke huruf A-Z
        result.append(chr(65 + mod))
    elif 26 <= mod < 36:  # Jika hasil mod adalah 26-35, tetap integer
        result.append(str(chr(48 + (mod - 26))))
    elif mod == 36:  # Jika hasil mod adalah 36, ubah ke "_"
        result.append('_')

# Gabungkan hasil menjadi satu string
print("".join(result))

