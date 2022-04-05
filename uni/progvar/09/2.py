#!/usr/bin/env python3
#
#
# Clint
#
# Problem #2
# ARRAY CHUNKING


def dividetochunk(numList):
    length = len(numList)
    last = numList[-1]
    
    del numList[-1]
    
    for i in range(0, length, last):
        yield numList[i:i + last]
        
    return numList


def main():
    numList = []
    
    nums = list(map(int, input().split()))
    numList.extend(nums)
    
    print(list(dividetochunk(numList)))
    
    
if __name__ == '__main__':
    main()
