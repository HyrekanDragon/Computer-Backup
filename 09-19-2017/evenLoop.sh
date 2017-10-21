#!/bin/bash

for NUM in {0..30}
do
  if [ $((NUM%2)) -eq 0 ]
    then 
      echo $NUM
  fi
done
