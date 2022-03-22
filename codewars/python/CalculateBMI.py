# Calculate BMI


def bmi(weight, height):
    bmi = (weight / pow(height, 2))

    if (bmi <= 18.5):
        return "Underweight"
    elif (bmi <= 25.0):
        return "Normal"
    elif (bmi <= 30.0):
        return "Overweight"
    else:
        return "Obese"


def main():
    weight, height = [float(x) for x in input().split()]

    print(bmi(weight, height))


if __name__ == '__main__':
    main()
