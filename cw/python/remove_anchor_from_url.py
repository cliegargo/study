# https://www.codewars.com/kata/51f2b4448cadf20ed0000386/train/python


import re

def remove_url_anchor(url):
    return re.sub(r"[#](?:[a-z]|[A-Z]|[0-9])+", "", url)



if __name__ == "__main__":
    url = input()
    print(remove_url_anchor(url))