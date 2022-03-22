#!/usr/bin/env bash


echo "Compiling: $1"
rustc $1 -o a.out
