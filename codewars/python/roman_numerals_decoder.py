def solution(roman):
    roman_num = {
        'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000
    }

    rom_eqv = []

    for i in roman:
        rom_eqv.append(roman_num.get(i))

    print(rom_eqv)







if __name__ == '__main__':
    roman = input()

    print(solution(roman))
