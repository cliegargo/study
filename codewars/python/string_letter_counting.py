# https://www.codewars.com/kata/59e19a747905df23cb000024/train/python


def string_letter_count(s):
    count = {}

    for i in s.lower():
        if i.isalpha():
            if i in count.keys():
                count[i] += 1
            else:
                count[i] = 1

    return ''.join([f'{i[1]}{i[0]}' for i in sorted(count.items())])













if __name__ == '__main__':
    s = input()

    print(string_letter_count(s))
