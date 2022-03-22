def sum(*args):
    return sum([i for i in range(len(list(args))) if isinstance(i, int)])
if __name__ == "__main__":
    args = (1,)
    args = (1, 2, 3)
    args = (-1, -2, -3)
    args = ('a', 1)


    print(sum(*args))
