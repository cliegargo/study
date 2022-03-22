def nexus(users):
    for i in users.items():
        if i[0] == i[1]:
            return i[0]
        elif i[0] + 1 == i[1]:
            return i[0]
        elif i[0] == i[1] + 1:
            return i[0]

if __name__ == '__main__':
    #users = {1: 3, 3: 3, 5: 1}
    #users = {1: 10, 2: 6, 3: 4, 5: 1}
    #users = {1: 10000, 10: 1000, 100: 100, 1000: 10, 10000: 1}  
    users = {5: 30, 10: 25, 15: 20, 20: 15, 25: 10, 30: 5}

    print(nexus(users))
