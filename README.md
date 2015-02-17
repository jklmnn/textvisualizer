textvisualizer
==============

Besschreibung
-------------

textvisualizer wandelt Tastatureingaben direkt in Bildinformation um. Dabei werden pro Tastendruck Pixel in einstellbarer Größe auf den Bildschirm gezeichnet. Zur Eingabe sind alle Zahlen sowie Buchstaben und einige Sonderzeichen verfügbar. Per Umschalttaste kann eine zweite Farbebene genutzt werden. Die Bilder lassen sich speichern und die Pixelgröße lässt sich im Betrieb ändern (wobei jeweils das bereits gezeichnete Bild gelöscht wird und ein neuer leerer weißer Hintergrund zur Verfügung steht.  
Die Bilder können wie folgt aussehen:  
![textvisualizer screenshot](http://jkliemann.de/tv/1422975620.png)  

Technische Daten
----------------

textvisualizer läuft auf einem [Raspberry Pi](https://de.wikipedia.org/wiki/Raspberry_Pi) Model B/B+ und verwendet als Betriebsystem [Raspbian 7 Wheezy](http://www.raspbian.org/FrontPage), welches eine von [Debian](https://www.debian.org/) abgeleitete Linuxdistribution ist. Das Raspberry Pi ist ein Einplatinencomputer mit einem 700MHz ARMv6 Prozessor und 512MB RAM (vergleichbar mit einem SMartphone von ca. 2009-2010).  
textvisualizer selbst ist in [C](https://de.wikipedia.org/wiki/C_%28Programmiersprache%29) geschrieben, benötigt als Unterbau das [X Window System](https://de.wikipedia.org/wiki/X_Window_System) sowie [DWM](http://dwm.suckless.org/) als Fenstermanager. Als [Displaymanager](https://de.wikipedia.org/wiki/X_Display_Manager) kommt [nodm](http://wiki.ubuntuusers.de/Displaymanager#Alternativen) zum Einsatz um einen automatischen Start bis in die Anwendung selbst zu gewährleisten. Weitere Software die zum Betrieb benötigt wird findet sich in der [requirements.txt](https://github.com/jklmnn/textvisualizer/blob/master/requirements.txt)-Datei.

Raspberry Pi Model B+:  
![Raspberry Pi Model B+](http://www.raspberrypi.org/wp-content/uploads/2014/07/rsz_b-.jpg)
