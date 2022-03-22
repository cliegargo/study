def flatten(*arg):
    flat = []

    for i in arg:
        for j in i:
            print(j, type(i))
            flat.append(j)

    return flat


if __name__ == '__main__':
    arg = (-4.5, -3, 1, 4)
    arg = ([1], [], 2, [4, 5, 6])
    arg = (1, 2, ['9', [], []], None)

    print(flatten(arg))
