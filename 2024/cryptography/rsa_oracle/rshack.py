import codecs

class Chopla(object):
  def __init__(self, n, e, c):
    c_bis = c * pow(2,e,n) % n
    print("\t[*] Please send the following ciphertext to the server: {}\n".format(c_bis))
    out = int(input("\t[*] What's the result? "))
    p = out // 2
    print("\t[+] The plaintext is: {}\n".format(p))

    try:
      p_text = codecs.decode(hex(p)[2:].replace('L',''), "hex_codec").decode('utf-8')

      print("\n\t[+] The interpreted plaintext: {}\n".format(p_text))

    except:
      print("\t[-] The plaintext is not interpretable\n")

