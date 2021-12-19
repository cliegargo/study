# https://www.codewars.com/kata/59dd3ccdded72fc78b000b25/train/python


def whatday(num):
    days = {
        1: "Sunday", 2: "Monday", 3: "Tuesday", 4: "Wednesday",
        5: "Thursday", 6: "Friday", 7: "Saturday"
    }

    if num in days.keys():
        return days.get(num)
    else:
        return "Wrong, please enter a number between 1 and 7"

if __name__ == "__main__":
    num = int(input())
    print(whatday(num))