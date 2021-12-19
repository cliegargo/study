# https://www.codewars.com/kata/52685f7382004e774f0001f7/train/python


def make_readable(seconds):
    hour = seconds // 3600
    mins = (seconds % 3600) // 60
    secs = (seconds % 60) % 60

    if seconds < 60:
        return "00:00:" + str(seconds).zfill(2)
    elif seconds == 60:
        return "00:" + str(seconds // 60).zfill(2) + ":00"
    else:
        return str(hour).zfill(2) + ":" + str(mins).zfill(2) + ":" + str(secs).zfill(2)


if __name__ == "__main__":
    seconds = int(input())

    print(make_readable(seconds))