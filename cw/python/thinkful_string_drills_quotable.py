# https://www.codewars.com/kata/5859c82bd41fc6207900007a/train/python


def quotable(name, quote):
    return f"{name} said: \"{quote}\""

if __name__ == "__main__":
    name = input()
    quote = input()

    print(quotable(name, quote))
