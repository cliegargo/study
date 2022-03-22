# https://www.codewars.com/kata/59be6bdc4f98a8a9c700007d/train/python


def remove_chars(s):
    letters = ''

    for i in s:
        if i.isalpha():
            letters += i
        elif i == ' ':
            letters += i

    return letters

if __name__ == '__main__':
    s = input()
    print(remove_chars(s))