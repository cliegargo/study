# https://www.codewars.com/kata/59a96d71dbe3b06c0200009c/train/python


def generate_shape(n):
	square = ""

	for i in range(n):
		square += "+" * n
		square += "\n"

	return square[:-1]


if __name__ == "__main__":
	n = int(input())
	print(generate_shape(n))
