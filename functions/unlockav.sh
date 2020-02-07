#!/bin/bash
cd $HOME/sk8Locker

input="vname.txt"

while IFS= read -r line; do
  base64 -d $line.en > $line
  rm -rv $line.en
done < "$input"
 
 
echo "all video file unlocked successfully!"
