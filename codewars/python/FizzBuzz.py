def fizzbuzz(n):
    fb = []
    for i in range(1, n+1):
        if i % 15 == 0:
            fb.append("FizzBuzz")
        elif i % 5 == 0:
            fb.append("Buzz")
        elif i % 3 == 0:
            fb.append("Fizz")
        else:
            fb.append(i)
    return fb

if __name__ == "__main__":
    print(fizzbuzz(3))