# https://www.codewars.com/kata/56fb3cde26cc99c2fd000009/train/python


def encrypter(strng):
    alpha_std = {
        'a': 97, 'b': 98, 'c': 99, 'd': 100, 'e': 101, 'f': 102, 'g': 103,
        'h': 104, 'i': 105, 'j': 106, 'k': 107, 'l': 108, 'm': 109, 'n': 110,
        'o': 111, 'p': 112, 'q': 113, 'r': 114, 's': 115, 't': 116, 'u': 117,
        'v': 118, 'w': 119, 'x': 120, 'y': 121, 'z': 122
    }

    alpha_opp = {
        'a': 'z', 'b': 'y', 'c': 'x', 'd': 'w', 'e': 'v', 'f': 'u', 'g': 't',
        'h': 's', 'i': 'r', 'j': 'q', 'k': 'p', 'l': 'o', 'm': 'n', 'n': 'm',
        'o': 'l', 'p': 'k', 'q': 'j', 'r': 'i', 's': 'h', 't': 'g', 'u': 'f',
        'v': 'e', 'w': 'd', 'x': 'c', 'y': 'b', 'z': 'a',
    }

    cipher_std = ''
    for i in strng:
        if i in alpha_std.keys():
            if (alpha_std.get(i) + 13) > 122:
                cipher_std += chr((alpha_std.get(i) + 13) - 26)
            else:
                cipher_std += chr(alpha_std.get(i) + 13)
        else:
            cipher_std += i

    cipher_opp = ''
    for i in cipher_std:
        if i in alpha_opp.keys():
            cipher_opp += alpha_opp.get(i)
        else:
            cipher_opp += i

    return cipher_opp


if __name__ == '__main__':
    strng = input()
    print(encrypter(strng))