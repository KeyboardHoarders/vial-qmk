// Copyright 2024 Jake Dinger (@slingthat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Vial
#define VIAL_KEYBOARD_UID {0x67, 0x50, 0x23, 0x73, 0x85, 0x1E, 0x4E, 0x00}
#define VIAL_UNLOCK_COMBO_ROWS { 0,0 }
#define VIAL_UNLOCK_COMBO_COLS { 0,1 }

#ifdef POINTING_DEVICE_ENABLE
    #define ANALOG_JOYSTICK_X_AXIS_PIN B4
    #define ANALOG_JOYSTICK_Y_AXIS_PIN B5
    #define ANALOG_JOYSTICK_AXIS_MIN 0
    #define ANALOG_JOYSTICK_AXIX_MAX 1023
    #define ANALOG_JOYSTICK_SPEED_REGULATOR 40
    #define ANALOG_JOYSTICK_READ_INTERVAL 10
    #define ANALOG_JOYSTICK_SPEED_MAX 2
#endif
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
