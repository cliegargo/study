# https://www.codewars.com/kata/52755006cc238fcae70000ed/train/python


def christmas_tree(height):
    tree = ""
    j = 1
    k = height - 1

    for i in range(height):
        tree += (' ' * k) + ('*' * (i + j)) + (' ' * k) + '\n'
        k -= 1
        j += 1

    return tree[:-1]


if __name__ == "__main__":
    height = int(input())
    print(christmas_tree(height))
