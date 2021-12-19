# Reversed String


# Create a slice that starts at the end of the string, and moves backwards. In
# this particular example, the slice statement [::-1] means start at the end of
# the string and end at position 0, move with the step -1, negative one, which
# means one step backwards.

def solution(string):
    # Slice the String
    # Now we have a string txt that reads "Hello World" backwards.
    return(string[::-1])


def main():
    string = input()

    print(solution(string))


if __name__ == '__main__':
    main()
