import calendar


def most_frequent_days(year):
    cal = calendar.Calendar()

    for i in cal.itermonthdates(year, 9):
        print(i)





if __name__ == '__main__':
    year = 2000

    print(most_frequent_days(year))
