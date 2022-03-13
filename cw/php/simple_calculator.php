<?php
    // https://www.codewars.com/kata/5810085c533d69f4980001cf/train/php


    function calculator($a, $b, $sign) {
        if((is_int($a) && is_int($b)) || is_float($a) ||is_float($b)) {
            switch($sign) {
                case "+":
                    return ($a + $b);
                    break;
                case "-":
                    return ($a - $b);
                    break;
                case "*":
                    return ($a * $b);
                    break;
                case "/":
                    return ($a / $b);
                    break;
                default:
                    return "unknown value";
                    break;
            }
        } else {
            return "unknown value";
        }
    }


echo calculator(0.5, 2, "*");

?>