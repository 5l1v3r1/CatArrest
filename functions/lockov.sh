 #!/bin/bash
cd $HOME/sk8Locker

echo "enter complete name of file with extension:"
read ifln

base64 $ifln > $ifln.en

echo "video file locked successfully!"
