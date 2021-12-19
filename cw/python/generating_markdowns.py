# https://www.codewars.com/kata/5f656199132bf60027275739/train/python


def generate_markdowns(markdown, text, url_or_language):
    return {
        "link": f"[{text}]({url_or_language})",
        "img": f"![{text}]({url_or_language})",
        "code": f"```{url_or_language}\n{text}\n```"
    }.get(markdown)



if __name__ == "__main__":
    """
    markdown = 'link'
    text = 'Github Codewars'
    url_or_language = 'https://github.com/codewars'
    """

    markdown = "code"
    text = "def generate_markdowns(markdown, text, url_or_language):\n    # Your code here!\n    pass"
    url_or_language = "python"

    print(generate_markdowns(markdown, text, url_or_language))
