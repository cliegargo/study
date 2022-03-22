import re
import string


def licence_plate(s):
    if s.isnumeric():
        return "not possible"
    else:
        s = s.upper()
        x = re.sub(r'[^a-zA-Z0-9]', '-', s)
        x = x.strip('-')

        y = ''
        print(x, len(x))

        try:
            i = 0
            while len(y) != 8:
                if x[i].isalpha() and x[i + 1].isnumeric():
                    print(x[i])
                    y += x[i] + '-'
                else:
                    print(x[i])
                    y += x[i]
                i += 1
        except:
            pass
        print(y)
        return y.replace('-', '-')


if __name__ == '__main__':
    s = input()

    print(licence_plate(s))
