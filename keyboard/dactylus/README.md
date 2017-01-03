Atreus Plus
======================
A spin off of the open source Atreus board with 5 rows and 6 columns instead of 4 rows and 5 columns. this has parts of qmk ported over to make it easier to configure the rows and column pinouts along with the diode positioning.

Build
-----
Move to this directory then just run `make` like:

    $ make -f Makefile.[pjrc|lufa]
    
Use `Makefile.pjrc` if you want to use PJRC stack or use `Makefile.lufa` for LUFA stack.