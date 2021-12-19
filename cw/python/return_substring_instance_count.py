# https://www.codewars.com/kata/5168b125faced29f66000005/train/python


def solution(full_text, search_text):
    return full_text.count(search_text)


if __name__ == "__main__":
    full_text = input()
    search_text = input()
    print(solution(full_text, search_text))