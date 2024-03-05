// Copyright 2024 slingthat (@slingthat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Vial
#define VIAL_KEYBOARD_UID {0x4F, 0x4B, 0x63, 0xFF, 0x1E, 0x09, 0x0E, 0x84}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
#define DYNAMIC_KEYMAP_MACRO_COUNT 4

#define USE_SERIAL
#define MASTER_LEFT

// #define SPLIT_USB_DETECT
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
