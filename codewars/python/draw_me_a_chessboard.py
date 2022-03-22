def chess_board(rows, columns):
    board = []
    tiles = []

    for i in range(rows):
        for j in range(i, columns):
            if i % 2 == 0:
                if j % 2 == 0:
                    print(j, "0")
                else:
                    print(j, "X")
                print(i, "0")
            else:
                if j % 2 == 0:
                    print(j, "0")
                else:
                    print(j, "X")
                print(i, "X")
if __name__ == "__main__":
    rows = int(input())
    columns = int(input())
    print(chess_board(rows, columns))
