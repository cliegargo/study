# https://www.codewars.com/kata/582887f7d04efdaae3000090/train/python


def find_senior(lst):
    age = [ages.get('age') for ages in lst]
    return [devs for devs in lst if max(age) in devs.values()]


if __name__ == '__main__':
    lst = [
        { 'firstName': 'Gabriel', 'lastName': 'X.', 'country': 'Monaco', 'continent': 'Europe', 'age': 49, 'language': 'PHP' },
        { 'firstName': 'Odval', 'lastName': 'F.', 'country': 'Mongolia', 'continent': 'Asia', 'age': 38, 'language': 'Python' },
        { 'firstName': 'Emilija', 'lastName': 'S.', 'country': 'Lithuania', 'continent': 'Europe', 'age': 19, 'language': 'Python' },
        { 'firstName': 'Sou', 'lastName': 'B.', 'country': 'Japan', 'continent': 'Asia', 'age': 49, 'language': 'PHP' }
    ]

    print(find_senior(lst))
