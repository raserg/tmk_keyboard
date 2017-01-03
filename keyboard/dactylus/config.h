/*
Copyright 2016 Sean Chapel <seoushi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H


/* USB Device descriptor parameter */
#define VENDOR_ID       0xDEDE
#define PRODUCT_ID      0x0002
#define DEVICE_VER      0x0001
#define MANUFACTURER    t.m.k.
#define PRODUCT         Dactylus

/* message strings */
#define DESCRIPTION     t.m.k. keyboard firmware for Dactylus

/* matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 12

/* Set 0 if need no debouncing */
#define DEBOUNCE    5

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define P0  0x42 //D2
#define P1  0x43 //D3
#define P2  0x41 //D1
#define P3  0x40 //D0
#define P4  0x44 //D4
#define P5  0x36 //C6
#define P6  0x47 //D7
#define P7  0x56 //E6
#define P8  0x24 //B4
#define P9  0x25 //B5
#define P10 0x26 //B6
#define P16 0x22 //B2
#define P14 0x23 //B3
#define P15 0x21 //B1
#define P18 0x67 //F7
#define P19 0x66 //F6
#define P20 0x65 //F5
#define P21 0x64 //F4

#define COL2ROW 0x0
#define ROW2COL 0x1

#define DIODE_DIRECTION COL2ROW

#define COLS (int []){ P6, P7, P8, P9, P10, P16, P14, P15, P18, P19, P20, P21}
#define ROWS (int []){ P0, P1, P2, P3, P4, P5 }

#endif
