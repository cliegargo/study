import re

def regex_contains_all(st):
    check = re.match(r'[a|b|c]', st)
    print(check)

if __name__ == '__main__':
    st = input()
    print(regex_contains_all(st))
