#!/usr/bin/env python3
#
#
# Clint
#
# Problem #3
# FLATTEN ARRAY


def flattenList(numList):
    flatten = []
    
    flatten.append(numList)
    
    return flatten
    
    
def displayList(numList):
    length = len(numList)
    
    for i in range(0, length, 2):
        yield numList[i:i + 2]
    
    return numList
    
    
def main():
    numList = []
    
    nums = list(map(int, input().split()))
    numList.extend(nums)
    
    mult = list(displayList(numList))
    print(mult)
    
    flatten = list(flattenList(numList))
    print(*flatten)
    
    
if __name__ == '__main__':
    main()
