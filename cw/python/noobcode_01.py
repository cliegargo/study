# https://www.codewars.com/kata/5709bdd2f088096786000008/train/python


def super_size(n):
    m = list(map(int, str(n)))

    l = []
    [l.append(i) if i == 0 or i == 1 else l.append(i) for i in reversed(sorted(m))]

    return int("".join([str(i) for i in l]))


if __name__ == "__main__":
    n = 24051
    print(super_size(n))
