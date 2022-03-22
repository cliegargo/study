# https://www.codewars.com/kata/589ebcb9926baae92e000001/train/python


def convert(number):
    return "".join([chr(int(number[i:i+2])) for i in range(0, len(number), 2)])

if __name__ == "__main__":
    number = input()
    print(convert(number))
