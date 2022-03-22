from calendar import monthrange

def get_day(day, is_leap):
    if is_leap:
        dd = day - 31
        if dd == 29:
            dd -= 1
        print(dd)
    else:
        print(day - 31)




if __name__ == '__main__':
    day = 60
    is_leap = True

    print(get_day(day, is_leap))
