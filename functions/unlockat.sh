#!/bin/bash
cd $HOME/sk8Locker

base64 -d $ctext.c.txt.en > $cfln

echo "custom text is saved and unlocked successfully as $cfln!"

