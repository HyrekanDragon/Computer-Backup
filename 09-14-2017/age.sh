#!/bin/bash

read age

if [ $age -lt 1 ]
 then
  echo "Baby"
elif [ $age -lt 3 ]
 then
  echo "Toddler"
elif [ $age -lt 5 ]
 then
  echo "Preschool"
elif [ $age -lt 12 ]
 then
  echo "Grade School"
elif [ $age -lt 18 ]
 then
  echo "Teen"
elif [ $age -lt 21 ]
 then
  echo "Young Adult"
elif [ $age -ge 21 ]
 then
  echo "Adult"
fi
