# https://www.codewars.com/kata/599c20626bd8795ce900001d/train/python


def summy(string_of_ints):
    numbers = []

    for i in string_of_ints.split():
        numbers.append(int(i))

    return sum(numbers)



if __name__ == "__main__":
    string_of_ints = input()
    print(summy(string_of_ints))