# https://www.codewars.com/kata/55a89dd69fdfb0d5ce0000ac/train/python


def types(x):
    if type(x) == int:
        return "int"
    elif type(x) == float:
        return "float"
    elif type(x) == str:
        return "str"
    elif type(x) == bool:
        return "bool"


if __name__ == "__main__":
    print(types(10))
    print(types(9.7))
    print(types("Hello"))
    print(types(True))