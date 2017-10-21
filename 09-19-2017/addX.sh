#!/bin/bash

FILELIST=`ls`

for FILE in $FILELIST
do
  chmod u+x $FILE
done

