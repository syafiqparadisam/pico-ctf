import sys

def exit():
  sys.exit(0)

def scramble(L):
  A = L
  i = 2
  while (i < len(A)):
    A[i-2] += A.pop(i-1)
    A[i-1].append(A[:i-2])
    i += 1
    
  return L

def flatten_hex(nested):
    flat = []
    if isinstance(nested, list):
        for item in nested:
            flat.extend(flatten_hex(item))
    elif isinstance(nested, str) and nested.startswith('0x'):
        flat.append(nested)
    return flat


def descramble(cypher):
    evaluated = eval(str(cypher))
    hex_values = flatten_hex(evaluated)
    flag = ''.join([chr(int(h, 16)) for h in hex_values])
    return flag

def get_flag():
  flag = open('flag.txt', 'r').read()
  flag = flag.strip()
  hex_flag = []
  for c in flag:
    hex_flag.append([str(hex(ord(c)))])
  print(hex_flag)
  return hex_flag

def main():
  flag = get_flag()
  cypher = scramble(flag)
  print("[+] Descrambled Flag:", descramble(cypher))


if __name__ == '__main__':
  main()
