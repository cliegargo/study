def format_words(words):
    l = len(words)

    if l == 1:
        return words[0]
    elif l == 2:
        return f"{words[0]} and {words[1]}"
    else:
        formatted = ""
        for i, j in enumerate(words):
            if (i + 1) == l:
                formatted += f"and {words[l - 1]}"
            else:
                formatted += f"{j}, "
        comma = formatted.rfind(',')
        return (formatted[:comma] + formatted[comma + 1 : :]).strip()








if __name__ == '__main__':
    words = ['ninja', 'samurai', 'ronin']

    print(format_words(words))
