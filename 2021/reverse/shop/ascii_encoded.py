flag = [112, 105, 99, 111, 67, 84, 70, 123, 98, 52, 100, 95, 98, 114, 111, 103, 114, 97, 109, 109, 101, 114, 95, 51, 100, 97, 51, 52, 97, 56, 102, 125]

decoded_flag = ""
for code in flag:
    decoded_flag += chr(code)


print(decoded_flag)
