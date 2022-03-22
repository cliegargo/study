def is_age_diverse(lst):
    ages = {
        range(10, 19): 1,
        range(20, 29): 1,
        range(30, 39): 1,
        range(40, 49): 1,
        range(50, 59): 1,
        range(60, 69): 1,
        range(70, 79): 1,
        range(80, 89): 1,
        range(90, 99): 1,
        range(100, 109): 1,
        range(110, 119): 1,
        range(120, 129): 1,
        range(130, 139): 1,
        range(140, 149): 1,
        range(150, 159): 1,
        range(160, 169): 1,
        range(170, 179): 1,
        range(180, 189): 1,
        range(190, 199): 1
    }

    dev_age = []

    for i in lst:
        dev_age.append(i.get('age'))

    for i in dev_age:
        if i in ages.keys():
            print(i, ages.get(i))
















if __name__ == '__main__':
    lst = [
        { 'firstName': 'Harry', 'lastName': 'K.', 'country': 'Brazil', 'continent': 'Americas', 'age': 19, 'language': 'Python' },
        { 'firstName': 'Kseniya', 'lastName': 'T.', 'country': 'Belarus', 'continent': 'Europe', 'age': 29, 'language': 'JavaScript' },
        { 'firstName': 'Jing', 'lastName': 'X.', 'country': 'China', 'continent': 'Asia', 'age': 39, 'language': 'Ruby' },
        { 'firstName': 'Noa', 'lastName': 'A.', 'country': 'Israel', 'continent': 'Asia', 'age': 40, 'language': 'Ruby' },
        { 'firstName': 'Andrei', 'lastName': 'E.', 'country': 'Romania', 'continent': 'Europe', 'age': 59, 'language': 'C' },
        { 'firstName': 'Maria', 'lastName': 'S.', 'country': 'Peru', 'continent': 'Americas', 'age': 60, 'language': 'C' },
        { 'firstName': 'Lukas', 'lastName': 'X.', 'country': 'Croatia', 'continent': 'Europe', 'age': 75, 'language': 'Python' },
        { 'firstName': 'Chloe', 'lastName': 'K.', 'country': 'Guernsey', 'continent': 'Europe', 'age': 88, 'language': 'Ruby' },
        { 'firstName': 'Viktoria', 'lastName': 'W.', 'country': 'Bulgaria', 'continent': 'Europe', 'age': 98, 'language': 'PHP' },
        { 'firstName': 'Piotr', 'lastName': 'B.', 'country': 'Poland', 'continent': 'Europe', 'age': 128, 'language': 'JavaScript' }
    ]

    print(is_age_diverse(lst))
