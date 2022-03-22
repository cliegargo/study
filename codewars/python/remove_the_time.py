# https://www.codewars.com/kata/56b0ff16d4aa33e5bb00008e/train/python


import re

def shorten_to_date(long_date):
    return re.sub(r", |[0-9]+am|[0-9]+pm", "", long_date)


if __name__ == "__main__":
    long_date = input()
    print(shorten_to_date(long_date))