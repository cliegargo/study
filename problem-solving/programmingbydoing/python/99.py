# Heron's Formula
#
# Formula: https://en.wikipedia.org/wiki/Heron's_formula#Formulation

import math
from fractions import Fraction

def calculate(a, b, c):

    # Formula 1:
    # A = (math.sqrt(s * (s - a) * (s - b) * (s - c)))

    # Formula 2:
    A = Fraction(1, 4) * math.sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c))

    # Formula 3:
    # A =          1/4 *      sqrt(2 * (a^2*b^2 + a^2+c^2 + b^2+c^2) - (a^4 + b^4 + c^5))
    #A = Fraction(1, 4) * math.sqrt(2 * (pow(a, 2) * (b, 2) + (a, 2) * (c, 2) + (b, 2) * (c, 2) - (pow(a, 4) + (b, 4) + (c, 4))))

    return A;

def main():
    a, b, c = [int(x) for x in input().split()]
    print(calculate(a, b, c))

if __name__ == "__main__":
    main()
