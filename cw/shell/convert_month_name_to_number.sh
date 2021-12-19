#!/bin/bash

# https://www.codewars.com/kata/58a2d1fdd7f6c7e51b000076/train/shell

month="$1"
shopt -s nocasematch
case $month in
    jan|january) echo 01;;
    feb|february) echo 02;;
    mar|march) echo 03;;
    apr|april) echo 04;;
    may) echo 05;;
    jun|june) echo 06;;
    jul|july) echo 07;;
    aug|august) echo 08;;
    sep|september) echo 09;;
    oct|october) echo 10;;
    nov|november) echo 11;;
    dec|december) echo 12;;
esac