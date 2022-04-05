#!/usr/bin/env python3
#
#
# Clint
#
# Problem #5
# MISSING LETTERS


def missingLetters(letters, letterList):
    letters = list(letters)
    ud = 'undefined'
    
    
    for i in letterList:
        if i not in letters:
            missing = i
            return missing
        else:
            return ud
            
            
def main():
    letterList = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
        
    letters = input()
    
    missing = missingLetters(letters, letterList)
    print(missing)
    
    
if __name__ == '__main__':
    main()
