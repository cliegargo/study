class example():
    foo = 'Python Reflection: Disassembling the secret'

def find_the_secret(f):
    d = dir(f)

    for i in d:
        print(i)



if __name__ == '__main__':
    print(find_the_secret(example))
