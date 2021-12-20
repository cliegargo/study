# https://www.codewars.com/kata/5302d846be2a9189af0001e4/train/python


def say_hello(name, city, state):
    return f"Hello, {' '.join(name)}! Welcome to {city}, {state}!"

if __name__ == "__main__":
    name = ["Lupin", "the", "Third"]
    city = "Los Angeles"
    state = "California"

    print(say_hello(name, city, state))
