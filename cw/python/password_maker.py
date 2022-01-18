# https://www.codewars.com/kata/5637b03c6be7e01d99000046/train/python


def make_password(phrase):
    password = ""

    for i in phrase.split():
        if i[0].lower() == 'o':
            password += "0"
        elif i[0].lower() == 'i':
            password += "1"
        elif i[0].lower() == 's':
            password += "5"
        else:
            password += i[0]

    return password


if __name__ == "__main__":
    phrase = input()
    print(make_password(phrase))
