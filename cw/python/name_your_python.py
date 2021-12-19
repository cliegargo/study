# https://www.codewars.com/kata/53cf459503f9bbb774000003/train/python


class Python:
    def __init__(self, name):
        self.name = name

    def name_my_python(self):
        print(self.name)

if __name__ == "__main__":
    p = Python("Bubba")
    p.name_my_python()