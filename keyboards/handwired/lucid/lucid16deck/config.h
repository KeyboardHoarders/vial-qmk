// Copyright 2024 slingthat (@slingthat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define ENCODERS_PAD_A { GP27, GP4 }
#define ENCODERS_PAD_B { GP26, GP5 }

#define ENCODER_RESOLUTION 4
#define DIP_SWITCH_PINS { GP23, GP29 }
#define VIAL_KEYBOARD_UID {0xBD, 0x23, 0xD5, 0x40, 0xD0, 0xA8, 0x58, 0x1A}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
#define OLED_DISPLAY_128x64
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
