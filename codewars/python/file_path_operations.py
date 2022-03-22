# https://www.codewars.com/kata/5844e0890d3bedc5c5000e54/train/python


import re

class FileMaster():
    def __init__(self, filepath):
        self.fp = filepath

    def extension(self):
        ext = re.findall("[.][a-zA-Z0-9]+", self.fp)
        return ''.join(ext)[1:]

    def filename(self):
        name =  re.findall("[/][a-zA-Z0-9]+[.]", self.fp)
        return ''.join(name)[1 : -1]

    def dirpath(self):
        path = ''.join(re.sub("[.][a-zA-Z0-9]+", "", self.fp))
        return path[0 : path.rfind('/') + 1]



if __name__ == "__main__":
    fm = FileMaster("/Users/person1/Pictures/house.png")
    print(fm.extension())
    print(fm.filename())
    print(fm.dirpath())
