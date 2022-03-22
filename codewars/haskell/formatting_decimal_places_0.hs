#!/usr/bin/env stack

import Numeric

twoDecimalPlaces :: Double -> Double
twoDecimalPlaces x = showGFloat(Just 2) x ""

main = do
    a <- getLine
    let x = (read a :: Double)
    print(twoDecimalPlaces x)
