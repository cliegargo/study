def number_of_pairs(gloves):
    print(f'GLOVES:\t{gloves}\n')

    pairs = []

    gloves = sorted(gloves)

    for i, j in enumerate(gloves):
        if i + 1 < len(gloves):
            if gloves[i] == gloves[i + 1]:
                print(f'IF\t{gloves[i]}\t->\t{gloves[i + 1]}')
                pairs.append([gloves[i], gloves[i + 1]])
            else:
                print(f'ELSE\t{gloves[i]}\t->\t{gloves[i + 1]}')
        else:
            pass

    print(f'PAIRS:\t{pairs}\n')

    count = 0
    for i in pairs:
        if len(i) == 2:
            count += 1

    return count












if __name__ == '__main__':
    gloves = ['red', 'green', 'blue', 'blue', 'red', 'green', 'red', 'red', 'red']
    #gloves = ['red', 'green', 'blue']
    #gloves = ['red', 'red']
    #gloves = ['red','green','blue','blue','red','green','red','red','red']
    print(number_of_pairs(gloves))
