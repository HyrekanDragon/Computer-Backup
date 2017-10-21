#!/bin/bash

SUM=0
INPUT=0

while [ $INPUT -lt 10 ];
do
	echo "Please input a number less than 10"
	read INPUT
	SUM=$((SUM+INPUT))
	echo "The sum is $SUM"
done



