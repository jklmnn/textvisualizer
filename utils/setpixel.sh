#!/bin/sh
import -window root /home/pi/images/$(date +%s).png
xterm -C /usr/bin/tv-pixel
#echo $? > /tmp/setpixel.$$
if [ $? -eq 0 ]; then
	sudo service nodm restart
fi
exit 0
