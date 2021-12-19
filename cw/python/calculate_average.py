# https://www.codewars.com/kata/57a2013acf1fa5bfc4000921/train/python


def find_average(numbers):
    sum = 0

    for i in numbers:
        sum += i

    return sum / len(numbers)


if __name__ == "__main__":
    lim = int(input())
    numbers = []
    for i in range(lim):
        i = int(input())
        numbers.append(i)

    print(find_average(numbers))