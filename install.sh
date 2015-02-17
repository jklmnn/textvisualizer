#!/bin/sh

sudo aptitude update
sudo aptitude install $(cat requirements.txt)
sudo cp ./config/nodm /etc/default/nodm
sudo cp ./web/* /var/www/
mkdir home/pi/images
sudo ln -s /home/pi/images/ /var/www/img
make -C ./dwm/
make -C ./textvisualizer/
sudo cp ./dwm/dwm /usr/bin/dwm
sudp cp ./textvisualizer/textvisualizer /usr/bin/textvisualizer
mkdir /home/pi/.dwm
cp ./config/autostart.sh /home/pi/.dwm/
sudo cp ./utils/* /usr/bin/

exit 0
