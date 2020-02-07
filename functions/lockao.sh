 #!/bin/bash
cd $HOME/sk8Locker

ls -I "*.jpg" -I "*.png" -I "*.mp4" -I "*.pdf" -I "*.csv"  > oname.txt

input="oname.txt"

while IFS= read -r line; do
  base64 $line > $line.en
  rm -rv $line
done < "$input"
 
 
echo "all other file locked successfully!"
