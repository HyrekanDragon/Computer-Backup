#!/bin/bash

MENUITEMS="Greeting Square Quit"
PS3="Enter Choice: "

select ITEM in $MENUITEMS
do
  if [ $ITEM == "Greeting" ]
  then
    echo "What is your name?"
    read NAME
    echo "Hello $NAME"
  elif [ $ITEM == "Square" ]
  then
    echo "Please input a number"
    read NUM
    echo $((NUM * NUM))
  elif [ $ITEM == "Quit" ]
  then
    break
  fi
done
