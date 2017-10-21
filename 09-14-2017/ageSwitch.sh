#!/bin/bash

echo "Please Enter a Stage"

read STAGE

case "$STAGE" in
 "Baby") echo "You are under 1"
 ;;
 "Toddler") echo "You are between 1 and 3"
 ;;
 "Preschool") echo "You are between 3 and 5"
 ;;
 "Grade School") echo "You are between 5 and 12"
 ;;
 "Teen") echo "You are between 12 and 18"
 ;;
 "Young Adult") echo "You are between 18 and 21"
 ;;
 "Adult") echo "You are older than 21"
 ;;
 *) echo "You don't have an age? You must be from another dimension! Welcome to our dimension"
 ;;
esac
