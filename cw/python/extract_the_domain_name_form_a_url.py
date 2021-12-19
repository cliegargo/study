# https://www.codewars.com/kata/514a024011ea4fb54200004b/train/python


import re

def domain_name(url):
    remove = re.sub(r"https://|http://|www.", "", url)
    domain = re.search(r".[a-z-A-Z0-9]+", remove)
    return str(domain[0])

if __name__ == "__main__":
    url = input()
    print(domain_name(url))