# https://www.codewars.com/kata/557a2c136b19113912000010/train/python


def reverse_it(data):
    reverse = ""

    if data in(True, False, [], {}):
        return data
    else:
        if isinstance(data, int):
            for i in reversed(str(data)):
                reverse += i

            return int(reverse)
        elif isinstance(data, float):
            for i in reversed(str(data)):
                reverse += i

            return float(reverse)
        elif isinstance(data, str):
            for i in reversed(data):
                reverse += i

            return reverse
        else:
            return data


if __name__ == "__main__":
    t = input()
    if t == "i":
        data = int(input())
        print(reverse_it(data))
        print(type(reverse_it(data)))
    else:
        data = input()
        print(reverse_it(data))
        print(type(reverse_it(data)))
