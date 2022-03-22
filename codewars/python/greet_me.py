# https://www.codewars.com/kata/535474308bb336c9980006f2/train/python


def greet(name):
    return "Hello " + name[0].upper() + name[1:].lower() + "!"


if __name__ == "__main__":
    name = input()
    print(greet(name))