def is_language_diverse(lst):
    print(lst)

    lang_count = {}

    for i in lst:
        lang = i.get('language')
        if lang in lang_count.keys():
            lang_count[lang] += 1
        else:
            lang_count[lang] = 1

    count = 0

    for i in lang_count.values():
        if i < 3:
            count += 1

    if count == len(lst):
        return True
    else:
        return False










if __name__ == '__main__':
    lst = [
        { 'firstName': 'Daniel', 'lastName': 'J.', 'country': 'Aruba', 'continent': 'Americas', 'age': 42, 'language': 'Python' },
        { 'firstName': 'Kseniya', 'lastName': 'T.', 'country': 'Belarus', 'continent': 'Europe', 'age': 22, 'language': 'Ruby' },
        { 'firstName': 'Sou', 'lastName': 'B.', 'country': 'Japan', 'continent': 'Asia', 'age': 43, 'language': 'Ruby' },
        { 'firstName': 'Hanna', 'lastName': 'L.', 'country': 'Hungary', 'continent': 'Europe', 'age': 95, 'language': 'JavaScript' },
        { 'firstName': 'Jayden', 'lastName': 'P.', 'country': 'Jamaica', 'continent': 'Americas', 'age': 18, 'language': 'JavaScript' },
        { 'firstName': 'Joao', 'lastName': 'D.', 'country': 'Portugal', 'continent': 'Europe', 'age': 25, 'language': 'JavaScript' }
    ]

    print(is_language_diverse(lst))