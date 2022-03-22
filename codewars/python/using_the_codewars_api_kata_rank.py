import requests

def sort_by_rank(list_of_kata):

    katas = {}

    for i in list_of_kata:
        url = f'https://www.codewars.com/api/v1/code-challenges/{i}'
        response = requests.get(url)
        data = response.json()
        katas[int(data['rank']['name'][:-4])] = i

    sort = []

    return sorted(reversed(katas))







if __name__ == '__main__':
    list_of_kata = ['building-blocks', 'can-you-get-the-loop', 'how-do-i-compare-numbers']
    print(sort_by_rank(list_of_kata))
