 #!/bin/bash
cd $HOME/sk8Locker

echo "enter complete name of file with extension:"
read ifln

base64 $ifln.en > $ifln

echo "other file locked successfully!"
