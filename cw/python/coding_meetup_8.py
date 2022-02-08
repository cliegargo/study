# https://www.codewars.com/kata/58291fea7ff3f640980000f9/train/python


def all_continents(lst):
    continent = [ 'Africa', 'Americas', 'Asia', 'Europe', 'Oceania' ]

    dev_cont = [devs.get('continent') for devs in lst]

    map_cont = {}
    for cont in dev_cont:
        if cont in continent:
            if cont in map_cont.keys():
                map_cont[cont] += 1
            else:
                map_cont[cont] = 1

    check_cont = sum([1 for cont in map_cont.items() if cont[0] in continent and cont[1] >= 1])

    return True if check_cont >= 5 else False





if __name__ == '__main__':
    lst = [
        { 'firstName': 'Fatima', 'lastName': 'A.', 'country': 'Algeria', 'continent': 'Africa', 'age': 25, 'language': 'JavaScript' },
        { 'firstName': 'Agustín', 'lastName': 'M.', 'country': 'Chile', 'continent': 'Americas', 'age': 37, 'language': 'C' },
        { 'firstName': 'Jing', 'lastName': 'X.', 'country': 'China', 'continent': 'Asia', 'age': 39, 'language': 'Ruby' },
        { 'firstName': 'Laia', 'lastName': 'P.', 'country': 'Andorra', 'continent': 'Europe', 'age': 55, 'language': 'Ruby' },
        { 'firstName': 'Oliver', 'lastName': 'Q.', 'country': 'Australia', 'continent': 'Oceania', 'age': 65, 'language': 'PHP' }
    ]

    print(all_continents(lst))
