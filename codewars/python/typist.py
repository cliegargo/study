from collections import defaultdict

def typist(s):
    case = defaultdict(list)
    count = 0

    try:
        for i in range(len(s)):
            if s[i].isupper():
                count += 2
                print(s[i], s[i + 1], '\t', count)
                if s[i].isupper() and s[i + 1].islower():
                    count += 2
                    print(s[i], s[i + 1], '\t', count)
            else:
                count += 1
                print(s[i], s[i + 1], '\t', count)
    except:
        pass









    print(count)


if __name__ == '__main__':
    #s = input()
    s = 'BeiJingDaXueDongMen'
    print(typist(s))
