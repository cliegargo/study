# https://www.codewars.com/kata/5e2c7639b5d728001489d910/train/python


import re

def get_product_id(url):
    return ''.join(re.findall(r'p\-([\d]+)\-[\d]+', url))




if __name__ == '__main__':
    url = input()
    print(get_product_id(url))
