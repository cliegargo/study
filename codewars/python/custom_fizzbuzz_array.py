# https://www.codewars.com/kata/5355a811a93a501adf000ab7/train/python


def fizz_buzz_custom(string_one = 'Fizz', string_two = 'Buzz', num_one = 3, num_two = 5):
    fizzbuzz = []

    for i in range(1, 101):
        if i % num_one == 0 and i % num_two == 0:
            fizzbuzz.append(f'{string_one}{string_two}')
        elif i % num_one == 0:
            fizzbuzz.append(string_one)
        elif i % num_two == 0:
            fizzbuzz.append(string_two)
        else:
            fizzbuzz.append(i)

    return fizzbuzz


if __name__ == "__main__":
    string_one = input()
    string_two = input()
    num_one = int(input())
    num_two = int(input())
    print(fizz_buzz_custom(string_one, string_two, num_one, num_two))
