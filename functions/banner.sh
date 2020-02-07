#!/bin/bash

echo "             [Presented By: 0x0is1]                              "       
echo "              The Ace Programmnigs Lab                             "       

echo "Move all files to be moved to sk8Locker at home directory"
cd $HOME
if [ -d $HOME/sk8Locker ]; then
echo "Lock file exist"

else
mkdir $HOME/sk8Locker 
fi

