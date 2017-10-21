#!/bin/bash

MENU="MOVE COPY PERMISSIONS QUIT"
PS3="Enter your choice: "

select ITEM in $MENU
do
  if [ $ITEM == "MOVE" ]
  then
    echo "What is the target file?"
    read FILE
    echo "What is the destination?"
    read DESTINATION
    echo "mv $FILE $DESTINATION"
    mv $FILE $DESTINATION
  elif [ $ITEM == "COPY" ]
  then
    echo "What is the target file?"
    read FILE
    echo "What is the destination?"
    read DESTINATION
    echo "cp $FILE $DESTINATION"
    cp $FILE $DESTINATION
  elif [ $ITEM == "PERMISSIONS" ]
  then
    echo "Provide accessors"
    read ACCESSORS
    echo "Provide file(s) to be modified"
    read FILE
    echo "chmod $ACCESSORS $FILE"
    chmod $ACCESSORS $FILE
  elif [ $ITEM == "QUIT" ]
  then
    break
  fi
done
