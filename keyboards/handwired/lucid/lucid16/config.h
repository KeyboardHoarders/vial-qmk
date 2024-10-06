// Copyright 2024 Jake Dinger (@slingthat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Vial
#define VIAL_KEYBOARD_UID {0x67, 0x50, 0x23, 0x73, 0x85, 0x1E, 0x4E, 0x00}
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
