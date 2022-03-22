import re

def balance(book):
    book = ''.join(re.sub(r'[!=:;?,{}]+', '', book))

    items = re.findall(r'[a-zA-Z\s]+', book)
    items = list(filter(('\n').__ne__, items))

    book = ''.join(re.sub(r'[a-zA-Z]+', '', book))
    book = book.split()

    deci = [round(float(book[i]), 2) for i in range(1, len(book)) if '.' in book[i]]
    intg = [round(int(book[i]), 2) for i in range(1, len(book)) if '.' not in book[i]]

    curr = float(book[0])

    bal_check = f'Original Balance: {curr}\r\n'


    bal = []

    for i in deci:
        curr -= i
        bal.append(f'Balance {round(curr, 2)}')


    for i in range(len(intg)):
        bal_check += f'{intg[i]}{items[i]}{deci[i]} {bal[i]}\r\n'

    bal_check += f'Total expense  {round(sum(deci), 2)}\r\n'
    bal_check += f'Average expense  {round(sum(deci) / len(deci), 2)}\r\n'

    return bal_check



























if __name__ == '__main__':
    book = '''1000.00\n125 Market 125.45\n126 Hardware 34.95\n127 Video 7.45\n128 Book 14.32\n129 Gasoline 16.10'''

    print(balance(book))
