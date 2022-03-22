# https://www.codewars.com/kata/5fc4e46867a010002b4b5f70/train/python


import calendar
def last_day(year,month):return calendar.monthrange(year,month)[1]


if __name__ == '__main__':
    print(last_day(2021, 12))
