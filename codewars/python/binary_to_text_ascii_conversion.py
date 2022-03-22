# https://www.codewars.com/kata/5583d268479559400d000064/train/python


def binary_to_string(binary):
    return ''.join([chr(int(binary[i : i + 8] , 2)) for i in range(0, len(binary), 8)])


if __name__ == '__main__':
    binary = input()
    print(binary_to_string(binary))
