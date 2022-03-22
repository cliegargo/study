# Vowel Count


def get_count(input_str):
    num_vowels = 0

    for i in input_str:
        if i == 'a' or i == 'i' or i == 'u' or i == 'e' or i == 'o':
            num_vowels = num_vowels + 1

    return num_vowels


def main():
    input_str = (input())

    print(get_count(input_str))


if __name__ == '__main__':
    main()
