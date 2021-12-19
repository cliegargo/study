# https://www.codewars.com/kata/5894986e2ddc8f6805000036/train/python


def ROT135(input):
    alpha = {
        'A': 65, 'B': 66, 'C': 67, 'D': 68, 'E': 69, 'F': 70, 'G': 71, 'H': 72,
        'I': 73, 'J': 74, 'K': 75, 'L': 76, 'M': 77, 'N': 78, 'O': 79, 'P': 80,
        'Q': 81, 'R': 82, 'S': 83, 'T': 84, 'U': 85, 'V': 86, 'W': 87, 'X': 88,
        'Y': 89, 'Z': 90, 'a': 97, 'b': 98, 'c': 99, 'd': 100, 'e': 101,
        'f': 102, 'g': 103, 'h': 104, 'i': 105, 'j': 106, 'k': 107, 'l': 108,
        'm': 109, 'n': 110, 'o': 111, 'p': 112, 'q': 113, 'r': 114, 's': 115,
        't': 116, 'u': 117, 'v': 118, 'w': 119, 'x': 120, 'y': 121, 'z': 122
    }

    num = {
        '0': 0, '1': 1, '2': 2, '3': 3, '4': 4,
        '5': 5, '6': 6, '7': 7, '8': 8, '9': 9,
    }

    rot_13 = ''
    for i in input:
        if i in alpha.keys():
            if i.isupper():
                if (alpha.get(i) + 13) > 90:
                    rot_13 += chr((alpha.get(i) + 13) - 26)
                else:
                    rot_13 += chr(alpha.get(i) + 13)
            else:
                if (alpha.get(i) + 13) > 122:
                    rot_13 += chr((alpha.get(i) + 13) - 26)
                else:
                    rot_13 += chr(alpha.get(i) + 13)
        else:
            rot_13 += i

    rot_13_5 = ''
    for i in rot_13:
        if i in num.keys():
            if(num.get(i) + 5) > 9:
                rot_13_5 += str((num.get(i) + 5) - 10)
            else:
                rot_13_5 += str(num.get(i) + 5)
        else:
            rot_13_5 += i

    return rot_13_5


if __name__ == '__main__':
    input = input()
    print(ROT135(input))