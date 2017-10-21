#!/bin/bash

SUM=0
INPUT=0

until [ $INPUT -ge 10 ]
do
	echo "Please enter a number. Enter 10 or higher to exit"
	read INPUT
	SUM=$((SUM + INPUT))
	echo "The sum is $SUM"
done
