a = 1096770097
b =  1952395366
c =  1600270708
d =  1601398833
e =  1716808014
f =  1734293296
g = 842413104
h = 1684157793



byte_data_a = a.to_bytes(4, 'big')  # Konversi ke 4 byte (big-endian)
byte_data_b = b.to_bytes(4, 'big')  # Konversi ke 4 byte (big-endian)
byte_data_c = c.to_bytes(4, 'big')  # Konversi ke 4 byte (big-endian)
byte_data_d = d.to_bytes(4, 'big')  # Konversi ke 4 byte (big-endian)
byte_data_e = e.to_bytes(4, 'big')  # Konversi ke 4 byte (big-endian)
byte_data_f = f.to_bytes(4, 'big')  # Konversi ke 4 byte (big-endian)
byte_data_g = g.to_bytes(4, 'big')  # Konversi ke 4 byte (big-endian)
byte_data_h = h.to_bytes(4, 'big')  # Konversi ke 4 byte (big-endian)


# Ubah setiap byte ke bentuk biner
chunks_a = [hex(byte) for byte in byte_data_a]
chunks_b = [hex(byte) for byte in byte_data_b]
chunks_c = [hex(byte) for byte in byte_data_c]
chunks_d = [hex(byte) for byte in byte_data_d]
chunks_e = [hex(byte) for byte in byte_data_e]
chunks_f = [hex(byte) for byte in byte_data_f]
chunks_g = [hex(byte) for byte in byte_data_g]
chunks_h = [hex(byte) for byte in byte_data_h]


flag = ""

for c in chunks_a:
    flag += chr(int(c, 16))

for c in chunks_b:
    flag += chr(int(c, 16))

for c in chunks_c:
    flag += chr(int(c, 16))

for c in chunks_d:
    flag += chr(int(c, 16))

for c in chunks_e:
    flag += chr(int(c, 16))

for c in chunks_f:
    flag += chr(int(c, 16))

for c in chunks_g:
    flag += chr(int(c, 16))

for c in chunks_h:
    flag += chr(int(c, 16))

print(flag)




