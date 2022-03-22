# https://www.codewars.com/kata/593f50f343030bd35e0000c6/train/python


def encode(s):
    alpha = {
        'a': 0, 'b': 1, 'c': 2, 'd': 3, 'e': 4, 'f': 5, 'g': 6, 'h': 7,
        'i': 8, 'j': 9, 'k': 10, 'l': 11, 'm': 12, 'n': 13, 'o': 14, 'p': 15,
        'q': 16, 'r': 17, 's': 18, 't': 19, 'u': 20, 'v': 21, 'w': 22,
        'x': 23, 'y': 24, 'z': 25
    }

    encoded = ''

    for i in s.lower():
        if i in alpha.keys():
            if alpha.get(i) % 2 == 0:
                encoded += '0'
            else:
                encoded += '1'
        else:
            encoded += i

    return encoded


if __name__ == '__main__':
    s = input()
    print(encode(s))
