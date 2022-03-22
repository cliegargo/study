# https://www.codewars.com/kata/5282b48bb70058e4c4000fa7/train/python


def hex_string_to_RGB(hex_string):
    hex_string = hex_string.upper().replace("#", "")

    decimal = []

    for i in hex_string:
        j = int(i, 16)
        decimal.append(j)

    r = int(decimal[0] * 16 + decimal[1] * 1)
    g = int(decimal[2] * 16 + decimal[3] * 1)
    b = int(decimal[4] * 16 + decimal[5] * 1)

    return {"r": r, "g": g, "b": b}


if __name__ == "__main__":
    hex_string = input()
    print(hex_string_to_RGB(hex_string))