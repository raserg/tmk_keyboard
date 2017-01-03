Dactylus
======================
Based off the keyboard the dactyl from Matt Adereth. The case has been highly modified and redesigned for alps/matias switches.

Wiring diagrams and 3d models can be found in the hardware directory.

Build
-----
Move to this directory then just run `make` like:

    $ make -f Makefile.pjrc

Install
-----
Make sure you have avrdude installed and run ./flash.sh when the device is in bootloader mode after the firmware has been successfuly compiled.