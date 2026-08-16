/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
To flash
qmk flash -kb crkbd/rev1 -km vial -e CONVERT_TO=rp2040_ce


You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define VIAL_KEYBOARD_UID {0x3B, 0x6B, 0xA0, 0x29, 0x80, 0x56, 0xED, 0xD1}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define TAPPING_TERM 180


//#define USE_MATRIX_I2C
#ifdef KEYBOARD_crkbd_rev1_legacy
#    undef USE_I2C
#    define USE_SERIAL
#endif



// Trackpad support
// Ensure RP2040 GPIO aliases are available before the I2C driver sees them
#ifndef GP2
#  define GP2 2U
#  define GP3 3U
#endif

#define I2C_DRIVER      I2CD1
#define I2C1_SDA_PIN    GP2
#define I2C1_SCL_PIN    GP3


#define CIRQUE_PINNACLE_ADDR 0x2A
#define CIRQUE_PINNACLE_DIAMETER_MM 40

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT


// Sensitivity tuning

#define POINTING_DEVICE_ROTATION_90
/* Select hand configuration */
#define MASTER_RIGHT
// #define MASTER_LEFT
// #define EE_HANDS


#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define BACKLIGHT_BREATHING


#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
