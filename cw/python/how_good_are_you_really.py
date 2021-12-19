# https://www.codewars.com/kata/5601409514fc93442500010b/train/python


def better_than_average(class_points, your_points):
    class_total = sum(class_points)
    return True if (your_points > (class_total / len(class_points))) else False



if __name__ == "__main__":
    lim = int(input())
    class_points = []
    for i in range(lim):
        i = int(input())
        class_points.append(i)
    your_points = int(input())
    print(better_than_average(class_points, your_points))