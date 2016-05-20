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
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    t.m.k.
#define PRODUCT         AtreusPlus

/* message strings */
#define DESCRIPTION     t.m.k. keyboard firmware for Atreus Plus

/* matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 12

/* Set 0 if need no debouncing */
#define DEBOUNCE    5

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define B0 0x20
#define B1 0x21
#define B2 0x22
#define B3 0x23
#define B4 0x24
#define B5 0x25
#define B6 0x26
#define B7 0x27
#define C0 0x30
#define C1 0x31
#define C2 0x32
#define C3 0x33
#define C4 0x34
#define C5 0x35
#define C6 0x36
#define C7 0x37
#define D0 0x40
#define D1 0x41
#define D2 0x42
#define D3 0x43
#define D4 0x44
#define D5 0x45
#define D6 0x46
#define D7 0x47
#define E0 0x50
#define E1 0x51
#define E2 0x52
#define E3 0x53
#define E4 0x54
#define E5 0x55
#define E6 0x56
#define E7 0x57
#define F0 0x60
#define F1 0x61
#define F2 0x62
#define F3 0x63
#define F4 0x64
#define F5 0x65
#define F6 0x66
#define F7 0x67

#define COL2ROW 0x0
#define ROW2COL 0x1

#define DIODE_DIRECTION COL2ROW

#define COLS (int []){ F0, F1, F4, F5, F6, F7, B6, B5, B4, D7, C7, C6 }
#define ROWS (int []){ B3, B7, D0, D1, D2, B2 }

#endif
