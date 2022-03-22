#!/bin/bash


# https://www.codewars.com/kata/584857c5a7878e993b0005cc/train/shell


directory=$1

if [[ $directory ]]; then
	if [[ -d $directory ]]; then
		fcounter=$(find $directory -type f 2> /dev/null | wc -l);
		echo "There are $fcounter files in $(readlink -f $directory)";
	else
		echo "Directory not found";
	fi
else
	echo "Nothing to find";
fi
