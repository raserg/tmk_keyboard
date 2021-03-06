/*
Copyright 2013 Oleg Kostyuk <cub.uanic@gmail.com>

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
#include <util/delay.h>
#include "bootloader.h"
#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(  // layer 0 : default
        // left hand
        ESC, 1,   2,   3,   4,   5,   EQL,
        TAB,Q,   W,   E,   R,   T,   LBRC,
        FN0, A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   FN1,
        LCTL, LGUI, LALT, LEFT,RGHT,
                                      LCTL,LALT,
                                           HOME,
                                 BSPC,DEL, END,
        // right hand
             GRV, 6,   7,   8,   9,   0,   MINS,
	     RBRC,Y,   U,   I,   O,   P,   BSLS,
	          H,   J,   K,   L,   SCLN,   QUOT,
             FN2, N,   M,   COMM,DOT, SLSH,RSFT,
               DOWN,  UP,   RALT,   RGUI, RCTRL,
        RALT,RCTL,
        PGUP,
        PGDN,ENT, SPC
    ),

    KEYMAP(  // layer 1 : function and symbol keys
        // left hand
        GRV, F1,  F2,  F3,  F4,  F5,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN3,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,HOME,END,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
        TRNS, F6,  F7,  F8,  F9,  F10, TRNS,
        TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  PGDN,PGUP,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
  
    KEYMAP(  // layer 2 : mods on thumb
         // left hand
         ESC, 1,   2,   3,   4,   5,   NO,
         TAB, Q,   W,   E,   R,   T,   NO,
         FN0, A,   S,   D,   F,   G,
         LBRC,Z,   X,   C,   V,   B,   NO,
         NO, NO,  LALT, LEFT,RGHT,
                                       EQL,NO,
                                             NO,
                                    FN4,FN5, NO,
         // right hand
         NO,  6,   7,   8,   9,   0,       MINS,
         NO,   Y,   U,   I,   O,   P,      BSLS,
               H,   J,   K,   L,   SCLN,   QUOT,
         NO,   N,   M,  COMM, DOT, SLSH,   RBRC,
                 DOWN,  UP,   RALT,    NO,    NO,
         NO,GRV,
         NO,
         NO, FN6, SPC
         ),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_MOMENTARY(1),
    ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    ACTION_LAYER_TOGGLE(2),
    ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSPC),
    ACTION_MODS_TAP_KEY(MOD_LCTL, KC_DEL),
    ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ENT),
    ACTION_MODS_TAP_KEY(MOD_LGUI, KC_SPC),
};
