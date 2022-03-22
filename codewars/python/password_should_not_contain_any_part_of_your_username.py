import re

def validate(username, password):
    check = re.findall(username, password)
    print(check)
    if username not in password:
        return True
    else:
        return False




if __name__ == '__main__':
    username = input()
    password = input()

    print(validate(username, password))
