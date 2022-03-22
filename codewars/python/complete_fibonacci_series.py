# https://www.codewars.com/kata/5239f06d20eeab9deb00049b/train/python


def fibonacci(n):
    series = []

    f_term = 0
    s_term = 1
    n_term = 0

    for i in range(n):
        series.append(n_term)
        n_term = f_term + s_term
        s_term = f_term
        f_term = n_term

    return series



if __name__ == "__main__":
    n = int(input())
    print(fibonacci(n))
