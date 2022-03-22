# https://www.codewars.com/kata/52fea6fd158f0576b8000089/train/python


class Converter():
    @staticmethod
    def to_ascii(h):
        return str(bytes.fromhex(h))[2:][:-1]


    @staticmethod
    def to_hex(s):
        hexa = ""

        for i in s:
            hexa += hex(ord(i))[2:]

        return hexa


if __name__ == "__main__":
    s = input()
    h = input()

    convert = Converter()
    print(convert.to_ascii(h))
    print(convert.to_hex(s))