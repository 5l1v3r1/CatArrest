 #!/bin/bash
cd $HOME/sk8Locker

ls *.mp4 *.wav > vname.txt

input="vname.txt"

while IFS= read -r line; do
  base64 $line > $line.en
  rm -rv $line
done < "$input"
 
 
echo "all video file locked successfully!"
