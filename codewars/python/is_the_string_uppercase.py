# https://www.codewars.com/kata/56cd44e1aa4ac7879200010b


def is_uppercase(inp):
    punct = "!#$%&'()*+, -./:;<=>?@[\]^_`{|}~"

    return True if(inp.isupper() or inp in punct) else False

if __name__ == "__main__":
    inp = input()
    print(is_uppercase(inp))