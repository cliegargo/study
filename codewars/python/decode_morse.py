# https://www.codewars.com/kata/54b0306c56f22d0bf9000ffb/train/python


def decode(s):
    TOME = {
        "..." : "s", "..-" : "u", "-." : "n", "-..-" : "x", ".----" : "1",
        "-" : "t", ".--." : "p", ".---" : "j", "....-" : "4", ".-." : "r",
        "....." : "5", "-----" : "0", "-..." : "b", "-.." : "d", "----." : "9",
        "-...." : "6", "--.-" : "q", "--.." : "z", ".--" : "w", "---" : "o",
        "..---" : "2", ".-" : "a", ".." : "i", "-.-." : "c", "...--" : "3",
        "-.--" : "y", "...." : "h", "---.." : "8", "...-" : "v", "--..." : "7",
        "--." : "g", "." : "e", "--" : "m", ".-.." : "l", "..-." : "f",
        "-.-" : "k"
    }

    morse = []
    tmp = ""

    for i in s:
        if i not in " ":
            tmp += i
        else:
            morse.append(tmp)
            tmp = ""
    morse.append(tmp)

    decode = ""
    
    for i in range(len(morse)):
        if morse[i] in TOME.keys():
            decode += TOME.get(morse[i])
        else:
            decode += " "

    if decode is not " ":
        return decode
    else:
        return ""


if __name__ == "__main__":
    s = input()
    print(decode(s))