#/bin/sh
sudo python2.7 reset.py /dev/ttyACM0
sudo avrdude -v -p atmega32u4 -P /dev/ttyACM0 -c avr109 -U flash:w:dactylus_pjrc.hex:i
