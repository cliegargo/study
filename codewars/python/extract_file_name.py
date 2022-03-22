# https://www.codewars.com/kata/597770e98b4b340e5b000071/train/python


class FileNameExtractor():
    def extract_file_name(dirty_file_name):
        dot_pos = dirty_file_name.rfind('.')
        uns_pos = dirty_file_name.find('_')

        return dirty_file_name[0:dot_pos][uns_pos + 1:]


if __name__ == '__main__':
    dirty_file_name = ['1231231223123131_FILE_NAME.EXTENSION.OTHEREXTENSION', '1_This_is_an_otherExample.mpg.OTHEREXTENSIONadasdassdassds34', '1231231223123131_myFile.tar.gz2']

    for i in dirty_file_name:
        print(FileNameExtractor.extract_file_name(i))
