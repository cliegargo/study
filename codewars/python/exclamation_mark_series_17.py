# https://www.codewars.com/kata/57fb44a12b53146fe1000136/train/python


def balance(left, right):
    weight_left = sum([2 if i == '!' else 3 for i in left])
    weight_right = sum([2 if i == '!' else 3 for i in right])

    if weight_left == weight_right:
        return "Balance"
    elif weight_left > weight_right:
        return "Left"
    else:
        return "Right"





if __name__ == "__main__":
    left = input()
    right = input()
    print(balance(left, right))
