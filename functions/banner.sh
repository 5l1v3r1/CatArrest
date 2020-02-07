#!/bin/bash

echo "             [Presented By: TAPs]                              "       
echo "              The Ace Programmigs                              "       
echo "                   0x0is1                                      "       

echo "Move all files to be moved to sk8Locker at home directory"
cd $HOME
if [ -d $HOME/sk8Locker ]; then
echo "Lock file exist"

else
mkdir $HOME/sk8Locker 
fi

