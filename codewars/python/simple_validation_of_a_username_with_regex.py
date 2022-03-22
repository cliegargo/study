# https://www.codewars.com/kata/56a3f08aa9a6cc9b75000023/train/python


import re

def validate_usr(username):
    validate = ''.join(re.findall(r'[a-z0-9\_]+', username))

    if len(validate) >= 4 and len(validate) <= 16:
        if len(validate) == len(username):
            return True
        else:
            return False
    else:
        return False




if __name__ == '__main__':
    username = input()
    print(validate_usr(username))
