# https://www.codewars.com/kata/574bd867d277832448000adf/train/python


import re


TYPE = {
    'mp3': True, 'flac': True, 'alac': True, 'aac': True,
    'jpg': True, 'jpeg': True, 'png': True, 'bmp': True, 'gif': True
}

def is_audio(file_name):
    if re.match(r'[a-zA-Z]+[.][a-z0-9]+', file_name):
        ext = file_name[file_name.rfind('.') + 1:]

        return TYPE.get(ext) if ext in TYPE.keys() else False
    else:
        return False


def is_img(file_name):
    if re.match(r'[a-zA-Z]+[.][a-z0-9]+', file_name):
        ext = file_name[file_name.rfind('.') + 1:]

        return TYPE.get(ext) if ext in TYPE.keys() else False
    else:
        return False


if __name__ == '__main__':
    file_name = [
        'Nothing Else Matters.mp3', 'NothingElseMatters.mp3', 'DaftPunk.FLAC',
        'DaftPunk.flac', 'AmonTobin.aac', ' Amon Tobin.alac', 'tobin.alac',
        'Home.jpg', 'flat.jpeg', 'icon.bmp', 'icon2.jpg', 'bounce.gif',
        'animate bounce.GIF', 'transparency.png'
    ]

    for i in file_name:
        print('Audio: ', is_audio(i))
        print('Image: ', is_img(i))
