# https://www.codewars.com/kata/526dbd6c8c0eb53254000110/train/python


import re

def alphanumeric(password):
    if password != '':
        check = ''.join(re.findall(r"^[a-zA-Z0-9]+", password))
        return True if len(check) == len(password) else False
    else:
        return False



if __name__ == '__main__':
    password = input()
    print(alphanumeric(password))
