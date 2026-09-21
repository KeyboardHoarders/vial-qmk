/* Copyright 2023 Brian Low
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// Enabling this option changes the startup behavior to listen for an
// active USB communication to delegate which part is master and which
// is slave. With this option enabled and theres’s USB communication,
// then that half assumes it is the master, otherwise it assumes it
// is the slave.
//
// I've found this helps with some ProMicros where the slave does not boot
#define SPLIT_USB_DETECT

//#ifdef OLED_ENABLE
//#   define OLED_FONT_H "keyboards/splitkb/aurora/sofle_v2/glcdfont.c"
//#endif

#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#define RGB_DISABLE_WHEN_USB_SUSPENDED     // turn off effects when suspended
#define SPLIT_TRANSPORT_MIRROR             // If LED_MATRIX_KEYPRESSES or LED_MATRIX_KEYRELEASES is enabled, you also will want to enable SPLIT_TRANSPORT_MIRROR
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100  // limits maximum brightness of LEDs (max 255). Higher may cause the controller to crash.

// Vial Support
#define VIAL_KEYBOARD_UID {0xA7, 0xA7, 0x9C, 0x4C, 0xE0, 0xB8, 0x00, 0x8D}

// The four corners
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 5 }

//#define VIAL_UNLOCK_COMBO_ROWS { 0, 5, 3, 8 }
//#define VIAL_UNLOCK_COMBO_COLS { 0, 0, 0, 0 }


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
#define AZOTEQ_IQS5XX_TIMEOUT_MS 3
#define AZOTEQ_IQS5XX_SCROLL_INITIAL_DISTANCE 18

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS


#define RGBLED_NUM 70
#define RGBLED_SPLIT {35,35}

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define BACKLIGHT_BREATHING

// ---------------------------------------------------------------------
// Interim mitigation for phantom 'O' keypresses caused by I2C
// (trackpad/OLED) noise coupling onto the D7 row-strobe pin, which sits
// on the RP2040-CE header right next to SDA/SCL. This does NOT fix an
// actual solder short/bridge - only a physical rework does that - but
// it reduces the odds of noise being misread as a keypress while the
// physical fix is pending. Safe to leave in permanently once the wiring
// is confirmed clean, but can be reverted to vialtrack's stock settings
// afterward if you want max trackpad responsiveness back.
// ---------------------------------------------------------------------

// Give the debounce filter more margin (default 5ms) so a brief noise
// glitch on a row/col pin is less likely to be read as a real, stable
// keypress. DEBOUNCE_TYPE stays at the default sym_defer_g (already the
// noise-resistant algorithm); see rules.mk for the per-key variant.
#define DEBOUNCE 10

// Slow down the shared I2C bus (OLED + trackpad) from the RP2040-CE
// default of 400kHz (Fast-mode) to 100kHz (Standard-mode). Slower bus
// activity means less frequent/energetic SDA/SCL switching, which is
// the actual source of the coupled noise onto the neighboring row pin.
#define I2C1_CLOCK_SPEED 100000

// Force slow slew rate on the I2C pins (RP2040-CE's stock pad config
// enables PAL_RP_PAD_SLEWFAST, which steepens SDA/SCL edges and worsens
// crosstalk onto adjacent pins). Dropping that flag is the single
// biggest lever here since it directly reduces edge-rate-driven
// coupling energy at the source.
#define I2C1_SCL_PAL_MODE (PAL_MODE_ALTERNATE_I2C | PAL_RP_PAD_PUE | PAL_RP_PAD_DRIVE4)
#define I2C1_SDA_PAL_MODE (PAL_MODE_ALTERNATE_I2C | PAL_RP_PAD_PUE | PAL_RP_PAD_DRIVE4)

// Poll the trackpad less often (driver default is ~11ms) so there are
// fewer I2C transactions per second, and therefore fewer chances for a
// glitch to land during a matrix scan. Trades a bit of cursor smoothness
// for fewer opportunities to misfire.
#define POINTING_DEVICE_TASK_THROTTLE_MS 20
