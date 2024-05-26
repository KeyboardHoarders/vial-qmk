// Copyright 2024 slingthat (@slingthat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#define ENCODERS_PAD_A { GP14 }
#define ENCODERS_PAD_B { GP13 }
#define ENCODER_RESOLUTION 4

#define DIP_SWITCH_PINS { GP16 }

#define MASTER_LEFT

#define VIAL_KEYBOARD_UID {0x77, 0x9E, 0x2D, 0xC5, 0xCD, 0x9C, 0xC0, 0xCC}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }


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
