# https://www.codewars.com/kata/60a54750138eac0031eb98e1/train/python


def check_vin(number):
    if len(number) == 17:
        vin = {
            'A': 1, 'B': 2, 'C': 3, 'D': 4, 'E': 5, 'F': 6, 'G': 7, 'H': 8, 'J': 1,
            'K': 2, 'L': 3, 'M': 4, 'N': 5, 'P': 7, 'R': 9, 'S': 2, 'T': 3, 'U': 4,
            'V': 5, 'W': 6, 'X': 7, 'Y': 8, 'Z': 9, '0': 0, '1': 1, '2': 2, '3': 3,
            '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9
        }

        decoded = []
        weights = [8, 7, 6, 5, 4, 3, 2, 10, 0, 9, 8, 7, 6, 5, 4, 3, 2]
        product = []

        for i in number:
            if i in vin.keys():
                decoded.append(vin.get(i))

        for i in range(len(decoded)):
            product.append(decoded[i] * weights[i])

        product_sum = sum(product)
        mod11 = product_sum % 11

        if mod11 == 10:
            if number[8] == 'X':
                return True
            else:
                return False
        else:
            if number[8] == str(mod11):
                return True
            else:
                return False
    else:
        return False




if __name__ == "__main__":
    number = input()
    print(check_vin(number))