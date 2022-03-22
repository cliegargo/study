def max_collatz_length(n):
    max_collatz = []
    steps = 0

    if n < 0 or type(n) is not int:
        return []
    else:
        while n != 1:
            if n % 2 == 0:
                n = n // 2
            else:
                n = 3 * n + 1
            steps += 1

    return [n, steps]


if __name__ == "__main__":
    n = 4
    print(max_collatz_length(n))
