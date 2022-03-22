# https://www.codewars.com/kata/55e9529cbdc3b29d8c000016/train/python


def char_to_ascii(string):
    if string in(None, "", " "):
        return None
    else:
        counter = {}

        for char in string:
            if char.isalpha():
                counter[char] = string.count(char)

        asciis = {}

        for key in counter:
            asciis[key] = ord(key)

        return asciis


if __name__ == "__main__":
    string = input()
    print(char_to_ascii(string))
