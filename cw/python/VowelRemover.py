def shortcut(s):
    for i in "aeiou":
        s = s.replace(i, "")
    return s


if __name__ == "__main__":
    print(shortcut("codewars"))