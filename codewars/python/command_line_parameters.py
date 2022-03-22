def args_to_string(args):
    string = ""

    for i in args:
        if isinstance(i, list):
            if len(i) == 2:
                for j in i:
                    pass
            for j in i:
                string += "--" + j + " "
        else:
            string += i + " "

    return string[:-1]


if __name__ == "__main__":
    args = ["foo", "bar"]
    args = [["foo", "bar"]]
    #args = [["foo", "bar"], "baz"]
    #args = [["foo"], ["bar", "baz"], "qux"]
    print(args_to_string(args))
