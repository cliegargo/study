# https://www.codewars.com/kata/60f94b4c8b940b0038f5e237/train/python


def boom_intensity(n):
    if n % 2 == 0 and n % 5 == 0:
        return "B" + ("O" * n) + "M!"
    elif n % 5 == 0:
        return "B" + ("O" * n) + "M"
    elif n % 2 == 0:
        return "B" + ("o" * n)+ "m!"
    else:
        return "boom"


if __name__ == "__main__":
    n = int(input())

    print(boom_intensity(n))