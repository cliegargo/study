# https://www.codewars.com/kata/55cb854deb36f11f130000e1/train/python


def convert_to_celsius (temp):
    celsius = (temp - 32) * (5 / 9)
    return celsius

def weather_info(temp):
    c = convert_to_celsius(temp)
    if (c < 0):
        return (str(c) + " is freezing temperature")
    else:
        return (str(c) + " is above freezing temperature")


if __name__ == "__main__":
    temp = int(input())
    print(weather_info(temp))