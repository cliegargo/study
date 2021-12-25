# https://www.codewars.com/kata/56e9ac87c3e7d512bc001363/train/python


def ascii_encrypt(plaintext):
    return ''.join(chr(ord(j) + i) for i, j in enumerate(plaintext))

def ascii_decrypt(plaintext):
    return ''.join(chr(ord(j) - i) for i, j in enumerate(plaintext))

if __name__ == '__main__':
    plaintext = input()
    print(ascii_encrypt(plaintext))
    print(ascii_decrypt(ascii_encrypt(plaintext)))
