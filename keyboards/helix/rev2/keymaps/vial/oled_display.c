/* Copyright 2020 yushakobo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <string.h>
#include QMK_KEYBOARD_H

// Kept in sync by hand with the `enum layer_number` in keymap.c -- this file
// is compiled as its own translation unit, so it can't just reuse that one.
enum layer_number {
    _QWERTY = 0,
    _COLEMAK,
    _DVORAK,
    _LOWER,
    _RAISE,
    _ADJUST,
    _NUMPAD,
    _FUNCTION,
    _NAV,
    _BLANK
};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_0;
    } else {
        return OLED_ROTATION_180;
    }
}

static void render_rgbled_status(bool full) {
#    ifdef RGBLIGHT_ENABLE
    char buf[30];
    if (RGBLIGHT_MODES > 1 && rgblight_is_enabled()) {
        if (full) {
            snprintf(buf, sizeof(buf), " LED %2d: %d,%d,%d ",
                     rgblight_get_mode(),
                     rgblight_get_hue()/RGBLIGHT_HUE_STEP,
                     rgblight_get_sat()/RGBLIGHT_SAT_STEP,
                     rgblight_get_val()/RGBLIGHT_VAL_STEP);
        } else {
            snprintf(buf, sizeof(buf), "[%2d] ", rgblight_get_mode());
        }
        oled_write(buf, false);
    }
#    endif
}

// Highest active layer wins (this is how the momentary-layer keys in
// process_record_user stack: RAISE/LOWER/ADJUST etc. all have a higher
// enum index than the three default layers, and the tri-layer combos
// (LOWER+RAISE -> ADJUST) already turn on the highest one for us), so a
// single flat table indexed by get_highest_layer() covers every layer,
// including combinations, without an exponential switch/case.
static const char PROGMEM layer_names[][8] = {
    [_QWERTY]   = "Qwerty",
    [_COLEMAK]  = "Colemak",
    [_DVORAK]   = "Dvorak",
    [_LOWER]    = "Lower",
    [_RAISE]    = "Raise",
    [_ADJUST]   = "Adjust",
    [_NUMPAD]   = "Numpad",
    [_FUNCTION] = "Fn",
    [_NAV]      = "Nav",
    [_BLANK]    = "Blank",
};

static void render_layer_status(void) {
    char buf[8];
    uint8_t layer = get_highest_layer(layer_state);

    oled_write_P(PSTR("Layer: "), false);
    if (layer < (sizeof(layer_names) / sizeof(layer_names[0]))) {
        memcpy_P(buf, layer_names[layer], sizeof(buf));
        buf[sizeof(buf) - 1] = '\0';
        oled_write_ln(buf, false);
    } else {
        oled_write_ln_P(PSTR("Undef"), false);
    }
}

void render_status(void) {
    // Render to mode icon
    static const char os_logo[][2][3] PROGMEM = {{{0x95,0x96,0},{0xb5,0xb6,0}},{{0x97,0x98,0},{0xb7,0xb8,0}}};
    if (is_mac_mode()) {
        oled_write_P(os_logo[0][0], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(os_logo[0][1], false);
    } else {
        oled_write_P(os_logo[1][0], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(os_logo[1][1], false);
    }

    oled_write_P(PSTR(" "), false);
    render_layer_status();

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUMLOCK") : PSTR("       "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAPS") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCLK") : PSTR("    "), false);
    oled_advance_page(true);
    render_rgbled_status(true);
    oled_write_P(PSTR("\n"), false);
}

bool oled_task_user(void) {
#    if defined(DEBUG_TO_SCREEN) && DEBUG_TO_SCREEN
    if (debug_enable) {
        return true;
    }
#    endif

    if (is_keyboard_master()) {
        render_status();
    } else {
        render_helix_logo();
        render_rgbled_status(false);
    }
    return false;
}

#endif // end of OLED_ENABLE
