def solution(mtrx):
    position = {}


    for row in range(len(mtrx)):
        for col in range(len(mtrx[row])):
            if mtrx[row][col] == '<':
                position['<'] = [col, row]

            elif mtrx[row][col] == '>':
                position['>'] = [col, row]

            elif mtrx[row][col] == '^':
                position['^'] = [col, row]

            elif mtrx[row][col] == 'v':
                position['v'] = [col, row]

            elif mtrx[row][col] == 'x':
                position['x'] = [col, row]

    #print('>', position.get('>')[0], position.get('>')[1])
    #print('x', position.get('x')[0], position.get('x')[1])



if __name__ == "__main__":
    #mtrx = [['>', ' '], [' ', 'x']]
    mtrx = [[' ', ' ', ' ', ' '], ['>', ' ', ' ', ' '], [' ', ' ', ' ', ' '], ['x', ' ', ' ', ' ']]



    print(solution(mtrx))
