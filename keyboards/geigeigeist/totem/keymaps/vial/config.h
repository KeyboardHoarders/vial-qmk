// Copyright 2022 GEIST @geigeigeist
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define VIAL_KEYBOARD_UID \
    { 0xCB, 0x37, 0x36, 0xFE, 0xEE, 0xED, 0xEE, 0x77 }
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 0 }

// #define TAPPING_TERM 170
#define TAPPING_TERM 170

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#define DYNAMIC_KEYMAP_LAYER_COUNT 16

// Max out Vial dynamic macros, tap dance, and combos.
// 32 is the top tier Vial grants once EEPROM > 4000 bytes (this board's
// RP2040 wear-leveled EEPROM is 4096 bytes), so tap dance/combos/key
// overrides are already at their ceiling by default - defined explicitly
// here so the intent is documented and future EEPROM changes don't
// silently shrink them.
#define VIAL_TAP_DANCE_ENTRIES 32
#define VIAL_COMBO_ENTRIES 32
#define VIAL_KEY_OVERRIDE_ENTRIES 32

// 128 is the hard ceiling: macro keycodes occupy QK_MACRO..QK_MACRO_MAX
// (0x7700-0x777F), a 128-entry range, so higher counts would have no
// keycode able to trigger them.
#define DYNAMIC_KEYMAP_MACRO_COUNT 128

