 #!/bin/bash
cd $HOME/sk8Locker

echo "enter custom text to lock:"
read ctext
echo "enter filename to save cutom text:"
read cfln
touch $cfln
echo $ctext > $cfln
base64 $cfln > $cfln.c.txt.en
rm -rv $cfln
echo "custom text is saved and locked successfully as $cfln!"
