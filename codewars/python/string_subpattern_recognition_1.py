def has_subpattern(string):
    subpattern = {}
    for i in string:
        if i in subpattern.keys():
            subpattern[i] += 1
        else:
            subpattern[i] = 1

    print(subpattern)


if __name__ == '__main__':
    string = input()
    print(has_subpattern(string))
