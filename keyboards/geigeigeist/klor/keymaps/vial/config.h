// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define VIAL_KEYBOARD_UID \
    { 0x1C, 0xE1, 0x26, 0x1D, 0x39, 0x60, 0x42, 0xB6 }

// Unlock combo: the outer pinky keys on the home row (Tab on the left,
// quote on the right).
#define VIAL_UNLOCK_COMBO_ROWS \
    { 1, 5 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 0 }

// The elite_c (atmega32u4) has very little flash headroom left once VIA/Vial
// are enabled. Trim a few of the less essential RGB matrix animations (kept
// on the default keymap) to fit the firmware in the available space.
#undef ENABLE_RGB_MATRIX_BAND_SAT
#undef ENABLE_RGB_MATRIX_BAND_VAL
#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#undef ENABLE_RGB_MATRIX_BREATHING
