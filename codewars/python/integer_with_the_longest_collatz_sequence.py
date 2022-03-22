# https://www.codewars.com/kata/57acc8c3e298a7ae4e0007e3/train/python


def longest_collatz(input_array):
    seqs = {}
    steps = 0

    for i in input_array:
        j = i
        while j != 1:
            if j % 2 == 0:
                j = j // 2;
            else:
                j = 3 * j + 1
            steps += 1
        seqs[steps] = i
        steps = 0

    longest = 0

    for i in seqs.keys():
        if i > longest:
            longest = i

    return seqs.get(longest)


if __name__ == "__main__":
    #input_array = [1, 5, 27, 4]
    input_array = [340, 113, 226, 75]
    print(longest_collatz(input_array))
