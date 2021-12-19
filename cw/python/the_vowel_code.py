# https://www.codewars.com/kata/53697be005f803751e0015aa/train/python


def encode(st):
    encode = ""

    for i in range(0, len(st)):
        if st[i] == 'a':
            encode += '1'
        elif st[i] == 'e':
            encode += '2'
        elif st[i] == 'i':
            encode += '3'
        elif st[i] == 'o':
            encode += '4'
        elif st[i] == 'u':
            encode += '5'
        else:
            encode += st[i]

    return encode


def decode(st):
    decode = ""

    for i in range(0, len(st)):
        if st[i] == '1':
            decode += 'a'
        elif st[i] == '2':
            decode += 'e'
        elif st[i] == '3':
            decode += 'i'
        elif st[i] == '4':
            decode += 'o'
        elif st[i] == '5':
            decode += 'u'
        else:
            decode += st[i]

    return decode


if __name__ == "__main__":
    st = input()

    print(encode(st))
    print(decode(st))