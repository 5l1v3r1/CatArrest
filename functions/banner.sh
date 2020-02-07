#!/bin/bash
echo "          _                   _ _                   _    ___   "         
echo " ___  ___| |__  _ __ ___   __| (_)_ __   ___ _ __  | | _( _ )  "          
echo "/ __|/ __| '_ \| '__/ _ \ / _  | | '_ \ / _ \ '__| | |/ / _ \  "          
echo "\__ \ (__| | | | | | (_) | (_| | | | | |  __/ |    |   < (_) | "          
echo "|___/\___|_| |_|_|  \___/ \__,_|_|_| |_|\___|_|    |_|\_\___/  "          
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

