# https://www.codewars.com/kata/55a5bfaa756cfede78000026/train/python

def problem(a):
    try:
        a = float(a)
        return ((a * 50) + 6)
    except ValueError:
        return "Error"

a = input()
print(problem(a))