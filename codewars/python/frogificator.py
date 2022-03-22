import re

def frogify(s):
    words = re.sub(r'[,;()-]+', '', s).split()



if __name__ == '__main__':
    s = input()
    print(frogify(s))
