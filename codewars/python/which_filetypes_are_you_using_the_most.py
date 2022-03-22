# https://www.codewars.com/kata/5c7254fcaccda64d01907710/train/python


def solve(files):
    if files:
        ext = [i[i.rfind('.'):] for i in files]

        count = {}

        for i in ext:
            if i in count.keys():
                count[i] += 1
            else:
                count[i] = 0

        top = count.get(max(count, key=count.get))

        files = [i[0] for i in count.items() if i[1] == top]

        return sorted(files)
    else:
        return []


if __name__ == '__main__':
    files = [
        'Lakey - Better days.mp3',
        'Wheathan - Superlove.wav',
        'groovy jam.als',
        '#4 final mixdown.als',
        'album cover.ps',
        'good nights.mp3'
    ]

    print(solve(files))
