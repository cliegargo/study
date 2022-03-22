import os

def runShell(boxNr):
    commands = ["help", "echo", "cat", "exit", "ls", "cd", "pwd", "whoami"]

    return "whoami"


if __name__ == "__main__":
    boxNr = int(input())
    print(runShell(boxNr))
