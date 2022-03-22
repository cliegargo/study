# https://www.codewars.com/kata/597754ba62f8a19c98000030/train/python


import re

def vowel_change(txt, vow):
    return re.sub(r'[aeiou+]', vow, txt)

if __name__ == '__main__':
    txt = input()
    vow = input()

    print(vowel_change(txt, vow))