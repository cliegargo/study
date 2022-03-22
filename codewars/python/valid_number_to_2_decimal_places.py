import re

def valid_number(n):
    return True if re.findall('[.{2}]', n)




if __name__ == '__main__':
    n = int(input())

    print(valid_number(n))
