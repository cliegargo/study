# https://www.codewars.com/kata/52fb87703c1351ebd200081f/train/python


def ordinal(century):
    yy = str(century)
    
    if yy == "11" or yy == "12" or yy == "13": return "th"
    elif yy[1:] == "1": return "st"
    elif yy[1:] == "2": return "nd"
    elif yy[1:] == "3": return "rd"
    else: return "th"


def what_century(year):
    if int(year[2:]) >= 1:
        century = int(year[:-2]) + 1
        return f"{int(year[:-2]) + 1}{ordinal(century)}"
    else:
        century = int(year[:-2])
        return f"{year[:-2]}{ordinal(century)}"


if __name__ == "__main__":
    year = input()
    print(what_century(year))