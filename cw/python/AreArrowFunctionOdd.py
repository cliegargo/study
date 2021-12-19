# https://www.codewars.com/kata/559f80b87fa8512e3e0000f5/train/python


def odds(lst):
    lst_odd = []

    for i in lst:
        lst_odd.append(i) if i % 2 else None
    
    return lst_odd


if __name__ == "__main__":
    lst_num = []
    numbers = list(map(int, input().split()))
    lst_num.extend(numbers)
    print(odds(lst_num))