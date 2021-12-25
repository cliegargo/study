# https://www.codewars.com/kata/594b8e182fa0a0d7fc000875/train/python


def find_e(s):
    if s == None:
        return None
    elif s == '':
        return ''
    else:
        e = {}
        for i in s.lower():
            if i == 'e':
                e[i] = e[i] + 1 if i in e.keys() else 1

        return str(e.get('e')) if 'e' in e.keys() else "There is no \"e\"."

if __name__ == '__main__':
    s = input()
    print(find_e(s))
