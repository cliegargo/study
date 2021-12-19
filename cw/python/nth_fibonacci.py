# https://www.codewars.com/kata/522551eee9abb932420004a0/train/python


def nth_fib(n):
    seq = []

    f_term = 0
    s_term = 1
    n_term = 0

    for i in range(100):
        seq.append(n_term)
        n_term = f_term + s_term
        s_term = f_term
        f_term = n_term

    return seq[n - 1]


if __name__ == "__main__":
    n = int(input())

    print(nth_fib(n))
