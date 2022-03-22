def starts_with(st, prefix):
    if st is "" and prefix is "":
        return True
    else:
        if st[0] == prefix[0]:
            return True
        else:
            return False



if __name__ == "__main__":
    st = input()
    prefix = input()

    print(starts_with(st, prefix))
