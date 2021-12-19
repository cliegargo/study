# https://www.codewars.com/kata/59cf805aaeb28438fe00001c/train/python


def sum_of_digits(digits):
    total = 0
    plus = ""
    
    if digits == None:
        return ""

    else:
        for i in str(digits):
            plus += i + " + "
            total += int(i)

        return f"{plus[:-3]} = {total}"



if __name__ == "__main__":
    digits = input()
    print(sum_of_digits(digits))
