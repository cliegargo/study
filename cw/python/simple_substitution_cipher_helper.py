# https://www.codewars.com/kata/52eb114b2d55f0e69800078d/train/python


class Cipher(object):
    def __init__(self, map1, map2):
        self.map1 = map1
        self.map2 = map2

    def encode(self, s):
        mapped = {j: self.map2[i] for i, j in enumerate(self.map1)}
        return "".join([mapped.get(i) if i in mapped.keys() else i for i in s])

    def decode(self, s):
        unmapped = {j: self.map1[i] for i, j in enumerate(self.map2)}
        return "".join([unmapped.get(i) if i in unmapped.keys() else i for i in s])

if __name__ == "__main__":
    map1 = "abcdefghijklmnopqrstuvwxyz"
    map2 = "etaoinshrdlucmfwypvbgkjqxz"


    cipher = Cipher(map1, map2)

    print(cipher.encode('abc'))
    print(cipher.decode(cipher.encode('abc')))
