# https://www.codewars.com/kata/57f222ce69e09c3630000212/train/python


def well(x):
    res = []
    for i in x:
        if i == "good":
            res.append(i)
    if len(res) == 0:
        return "Fail!"
    elif len(res) == 1 or len(res) == 2:
        return "Publish!"
    else:
        return "I smell a series!"

if __name__ == "__main__":
    x = [
        ['bad', 'bad', 'bad'],
        ['good', 'bad', 'bad', 'bad', 'bad'],
        ['good', 'bad', 'bad', 'bad', 'bad', 'good', 'bad', 'bad', 'good']
    ]
    for i in x:
        print(well(i))