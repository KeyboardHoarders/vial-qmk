// Copyright 2024 slingthat (@slingthat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID {0x40, 0x3F, 0x81, 0x00, 0x78, 0x67, 0x84, 0x54}

#define VIAL_UNLOCK_COMBO_ROWS { 0,0 }
#define VIAL_UNLOCK_COMBO_COLS { 0,1 }



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
