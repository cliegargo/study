# https://www.codewars.com/kata/52449b062fb80683ec000024/train/python


def generate_hashtag(s):
    if s == "":
        return False
    else:
        if len(s) > 140:
            return False
        else:
            s = s.title().replace(" ", "")
            hashtag = "#" + s
            return hashtag


if __name__ == "__main__":
    s = input()
    print(generate_hashtag(s))