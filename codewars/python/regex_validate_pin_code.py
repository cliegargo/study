# https://www.codewars.com/kata/55f8a9c06c018a0d6e000132/train/python


import re

def validate_pin(pin):
    if len(pin) >= 4 and len(pin) <= 6:
        if re.fullmatch(r"[\d]{4}|[\d]{6}", pin):
            return True
        else:
            return False
    else:
        return False


if __name__ == "__main__":
    pin = input()
    print(validate_pin(pin))