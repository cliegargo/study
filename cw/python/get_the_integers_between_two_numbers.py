# https://www.codewars.com/kata/598057c8d95a04f33f00004e/train/python


def function(start_num, end_num):
    lst_num = []

    for i in range(start_num+1, end_num):
        lst_num.append(i)

    return lst_num


if __name__ == "__main__":
    start_num, end_num = map(int, input().split())
    print(function(start_num, end_num))