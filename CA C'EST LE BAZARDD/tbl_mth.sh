#!/bin/bash

if [[ $# -lt 2 ]]
then
	echo "Usage: $0 <int1> <int2>"
	exit
fi

if [[ $# -gt 2 ]] 
then
	echo "Few arguments detected"
	exit
fi

if [[ $1 -gt $2 ]]
then
	echo "2nd argument is bigger than the first"
	exit
fi

for ((i=$1; i <= $2; i++))
do
	for ((j=$1; j <= $2; j++))
	do
		echo -ne "$((i*j))\t"
	done 
	echo -e "\n"
done
exit
