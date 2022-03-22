#!/usr/bin/env stack


module Codewars.Kata.HelloWorld where

--multiply :: Integer -> Integer
length :: [n] -> Int

main = do
    x <- getLine
    let n = (read x :: Integer)
    print(length n)
    --print(multiply)
