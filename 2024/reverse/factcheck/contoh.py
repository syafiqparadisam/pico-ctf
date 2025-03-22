local_208 = "5"
local_c8 = "9"
local_a8 = "6"
local_68 = "7"
local_lc8 = "3"
local_l48 = "e"
local_l68 = "a"
flag = "picoCTF{wELF_d0N3_mate_"
local_le8 = "7"
local_l88 = "5"
local_la8 = "0"
local_88 = "d"
local_228 = "5"
local_128 = "f"

if ord(local_208) < ord("B"):
    flag += local_c8

if ord(local_a8) != ord("A"):
    flag += local_68
if (int(local_lc8) - ord(local_l48)) == 3:
    flag += local_lc8

flag += local_le8
flag += local_l88
if ord(local_l68) == ord("G"):
    flag += local_l68

flag += local_la8
flag += local_88
flag += local_228
flag += local_128
flag += "}"

print(flag)


    
