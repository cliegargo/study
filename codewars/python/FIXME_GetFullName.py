# https://www.codewars.com/kata/597c684822bc9388f600010f/train/python



class Dinglemouse(object):
    def __init__(self, first_name, last_name):
        self.first_name = first_name
        self.last_name = last_name


    def get_full_name(self):
        if self.first_name == '':
            return self.last_name
        elif self.last_name == '':
            return self.first_name
        else:
            return self.first_name + ' ' + self.last_name