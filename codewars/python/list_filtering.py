# https://www.codewars.com/kata/53dbd5315a3c69eed20002dd/train/python


def filter_list(l):
    return [i for i in l if isinstance(i, int)]


if __name__ == "__main__":
    l = [1,2,'a','b']
    print(filter_list(l))
