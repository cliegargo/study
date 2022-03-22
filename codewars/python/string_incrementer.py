import re

def increment_string(strng):
    if strng == "":
        return "1"
    else:
        word = ''.join(re.findall(r"[\D]+", strng))
        nums = re.findall(r"[\d]+", strng)

        if nums == []:
            return f"{strng}1"
        else:
            nums = int(''.join(nums)) + 1
            return f"{word}{nums}"





if __name__ == '__main__':
    strng = input()
    print(increment_string(strng))