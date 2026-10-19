/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

// To compile and flash this keymap for the left and right sides seperately, use the following commands:
//make lily58/rev1:vial:uf2-split-left CONVERT_TO=rp2040_ce
//make lily58/rev1:vial:uf2-split-right CONVERT_TO=rp2040_ce

#pragma once

/* VIAL UID for Lily58*/
#define VIAL_KEYBOARD_UID {0x7E, 0xFD, 0xFC, 0x5B, 0x7D, 0x39, 0x48, 0x06}

/* VIAL secure unlock keystroke - currently both big keys (typ. SPACE/ENTER) */
#define VIAL_UNLOCK_COMBO_ROWS {4, 9}
#define VIAL_UNLOCK_COMBO_COLS {4, 4}


/* Select hand configuration */
//#define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS
/* Space reduction */

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIAL_TAP_DANCE_ENTRIES 30
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
//#define NO_ACTION_ONESHOT

//#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100


