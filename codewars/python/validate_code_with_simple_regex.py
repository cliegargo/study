# https://www.codewars.com/kata/56a25ba95df27b7743000016/train/python


import re

def validate_code(code):
    return True if re.match(r'^[123]', str(code)) else False

if __name__ == '__main__':
    code = int(input())
    print(validate_code(code))
