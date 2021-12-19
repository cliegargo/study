-- https://www.codewars.com/kata/50654ddff44f800200000004/train/haskell


multiply :: Int -> Int -> Int 
multiply a b = a * b

main = do
    x <- getLine
    let a = (read x :: Int)
    y <- getLine
    let b = (read y :: Int)

    print (multiply a b)