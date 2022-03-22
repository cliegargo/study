def encode(s):
    for i in s:
        for c in i:
            if c != ' ':
                print('if',c)
            else:
                print('el',c)






if __name__ == '__main__':
    s = input()

    print(encode(s))
