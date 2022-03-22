# https://www.codewars.com/kata/57e3f79c9cb119374600046b/train/python

def hello(name=None):
    if name:
        return "Hello, " + name[0].upper()+ name[1:].lower() + "!"
    else:
        return "Hello, World!"
        

if __name__ == "__main__":
    name = input()

    print(hello(name))