def collatz_steps(n, steps):

    for i in range(1, n + 1):
        print(i)


if __name__ == "__main__":
    n = 1
    steps = 'UUDU'
    print(collatz_steps(n, steps))
