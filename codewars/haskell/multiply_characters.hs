#!/usr/bin/env stack


spam :: Int -> Int
spam i =
	do
	    
main = do
    x <- getLine
    let i = (read x :: Int)
    print(spam i)
