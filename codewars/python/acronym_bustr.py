import re


def acronym_buster(message):
    acronyms = {
        'KPI': 'key performance indicators',
        'EOD': 'the end of the day',
        'TBD': 'to be deciced',
        'WAH': 'work at home',
        'IAM': 'in a meeting',
        'OOO': 'out of office',
        'NRN': 'no reply necessary',
        'CTA': 'call to action',
        'SWOT': 'strengths, weaknesses, opportunities and threats'
    }

    new = ''

    print(re.findall(r'\s|,|[^,\s]+', message))

    for i in message.split():
        if i != 'I' and i.isupper():
            if i in acronyms.keys():
                print(acronyms.get(i))
                new += acronyms.get(i)
            else:
                return f'{i} is an acronym. I do not like acronyms. Please remove them from your emai.'
        else:
            print(i)
            new += i

    print(new)



if __name__ == '__main__':
    message = input()#'BRB I need to go into a KPI meeting before EOD'

    print(acronym_buster(message))
