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
//#define AZOTEQ_IQS5XX_TPS43
#define AZOTEQ_IQS5XX_WIDTH_MM  43
#define AZOTEQ_IQS5XX_HEIGHT_MM 30

#define AZOTEQ_IQS5XX_RESOLUTION_X 1400
#define AZOTEQ_IQS5XX_RESOLUTION_Y 1400

#define AZOTEQ_IQS5XX_TAP_ENABLE true
#define AZOTEQ_IQS5XX_TWO_FINGER_TAP_ENABLE true
#define AZOTEQ_IQS5XX_PRESS_AND_HOLD_ENABLE true
#define AZOTEQ_IQS5XX_SWIPE_X_ENABLE false
#define AZOTEQ_IQS5XX_SWIPE_Y_ENABLE false
#define AZOTEQ_IQS5XX_ZOOM_ENABLE   false



// Sensitivity tuning
#define AZOTEQ_IQS5XX_TAP_TIME 110
#define AZOTEQ_IQS5XX_TAP_DISTANCE 12
#define AZOTEQ_IQS5XX_HOLD_TIME 320
#define AZOTEQ_IQS5XX_TIMEOUT_MS 20
#define AZOTEQ_IQS5XX_SCROLL_INITIAL_DISTANCE 18

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS


#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define BACKLIGHT_BREATHING


#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_KEYRELEASES

    #define RGB_MATRIX_EFFECT_ALPHAS_MODS
    #define RGB_MATRIX_EFFECT_BREATHING
    #define RGB_MATRIX_EFFECT_CYCLE_ALL
    #define RGB_MATRIX_EFFECT_CYCLE_LEFT_RIGHT
    #define RGB_MATRIX_EFFECT_RAINBOW_MOVING_CHEVRON
    #define RGB_MATRIX_EFFECT_TYPING_HEATMAP
    #define RGB_MATRIX_EFFECT_SOLID_REACTIVE_SIMPLE
    #define RGB_MATRIX_EFFECT_SOLID_REACTIVE_MULTIWIDE
#endif