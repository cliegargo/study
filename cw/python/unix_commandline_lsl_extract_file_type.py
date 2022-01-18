# https://www.codewars.com/kata/5822b65bb81f702016000026/train/python


def linux_type(file_attribute):
    file_type = {
        "-": "file", "d": "directory", "l": "symlink", "c": "character_file",
        "b": "block_file", "p": "pipe", "s": "socket", "D": "door"
    }

    return file_type.get(file_attribute[0])


if __name__ == "__main__":
    file_attribute = input()
    print(linux_type(file_attribute))
