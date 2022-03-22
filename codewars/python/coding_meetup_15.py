def find_odd_names(lst):
    names = [devs.get('firstName') for devs in lst]

    value = {}
    add = 0

    for name in names:
        for chars in name:
            add += ord(chars)
        value[name] = add
        add = 0

    odd = []

    for i in value.items():
        if i[1] % 2 != 0:
            for j in lst:
                if j.get('firstName') == i[0]:
                    print(j)
                    odd.append(j)
    return odd






if __name__ == '__main__':
    lst = [
        { 'firstName': 'Aba', 'lastName': 'N.', 'country': 'Ghana', 'continent': 'Africa', 'age': 21, 'language': 'Python' },
        { 'firstName': 'Abb', 'lastName': 'O.', 'country': 'Israel', 'continent': 'Asia', 'age': 39, 'language': 'Java' }
    ]

    print(find_odd_names(lst))