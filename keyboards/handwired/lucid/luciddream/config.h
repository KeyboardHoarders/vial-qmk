// Copyright 2024 slingthat (@slingthat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define ENCODERS_PAD_A { GP27 }
#define ENCODERS_PAD_B { GP26 }
#define ENCODER_RESOLUTION 4

#define VIAL_KEYBOARD_UID {0xC0, 0x56, 0xE5, 0xD1, 0x39, 0x63, 0x57, 0x85}
#define VIAL_UNLOCK_COMBO_ROWS { 0,0 }
#define VIAL_UNLOCK_COMBO_COLS { 0,1 }
#define DIP_SWITCH_PINS { GP28 }

#define MASTER_LEFT
#define USE_SERIAL

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
