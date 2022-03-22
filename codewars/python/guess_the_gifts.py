def guess_gifts(wishlist, presents):
    pres = []

    for i in wishlist:
        for j in i.keys():
            print(i.get(j))










if __name__ == '__main__':
    wishlist = [
        {'name': "mini puzzle", 'size': "small", 'clatters': "yes", 'weight': "light"},
        {'name': "toy car", 'size': "medium", 'clatters': "a bit", 'weight': "medium"},
        {'name': "card game", 'size': "small", 'clatters': "no", 'weight': "light"}
    ]

    presents = [
        {'size': "medium", 'clatters': "a bit", 'weight': "medium"},
        {'size': "small", 'clatters': "yes", 'weight': "light"}
    ]

    print(guess_gifts(wishlist, presents))
