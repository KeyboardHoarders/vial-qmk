// Copyright 2024 slingthat (@slingthat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define ENCODERS_PAD_A { GP26 }
#define ENCODERS_PAD_B { GP27 }
#define ENCODER_RESOLUTION 4
#define SPLIT_WPM_ENABLE
// Vial
#define VIAL_KEYBOARD_UID {0xBA, 0x0E, 0x55, 0x0B, 0xF6, 0xD5, 0xDF, 0xBB}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
#define DIP_SWITCH_PINS { GP22 }

#define MASTER_LEFT



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
