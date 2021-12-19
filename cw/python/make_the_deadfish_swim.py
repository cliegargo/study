# https://www.codewars.com/kata/51e0007c1f9378fa810002a9/train/python


def parse(data):
    count = 0
    arr = []

    for char in data:
        if char == 'i':
            count += 1
        elif char == 'd':
            count -= 1
        elif char == 's':
            count = pow(count, 2)
        elif char == 'o':
            arr.append(count)

    return arr

if __name__ == "__main__":
    data = ["iiisdoso", "ooo", "ioioio", "idoiido", "isoisoiso", "countodewars"]
    for i in data:
        print(parse(i))
