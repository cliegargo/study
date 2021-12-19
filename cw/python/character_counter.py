# https://www.codewars.com/kata/56786a687e9a88d1cf00005d/train/python


def validate_word(word):
	counter = {}

	word = word.lower()

	for i in word:
		counter[i] = word.count(i)

	for i in counter.values():
		if counter[word[0]] != i:
			return False

	return True

if __name__ == "__main__":
	word = input()

	print(validate_word(word))
