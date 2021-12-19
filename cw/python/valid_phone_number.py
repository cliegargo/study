import re

def validPhoneNumber(phoneNumber):
    number = r"\([0-9]\) [0-9]\-[0-9]"
    if re.fullmatch(number, phoneNumber):
        return True
    else:
        return False

if __name__ == "__main__":
    phoneNumber = input()

    print(validPhoneNumber(phoneNumber))