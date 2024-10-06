// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _RAISE,
    _LOWER
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT_ortho_4x4(
        MO(_RAISE),   MO(_LOWER),   KC_9,   KC_S,
        KC_4,   KC_5,   KC_6,   KC_T,
        KC_1,   KC_2,   KC_3,   KC_S,
        KC_0,   KC_T, KC_T, KC_S
    ),
    [_RAISE] = LAYOUT_ortho_4x4(
        MO(_RAISE),   MO(_LOWER),   KC_9,   KC_S,
        KC_4,   KC_5,   KC_6,   KC_T,
        KC_1,   KC_2,   KC_3,   KC_S,
        KC_0,   KC_T, KC_T, KC_S
    ),
    [_LOWER] = LAYOUT_ortho_4x4(
        MO(_RAISE),   MO(_LOWER),   KC_9,   KC_S,
        KC_4,   KC_5,   KC_6,   KC_T,
        KC_1,   KC_2,   KC_3,   KC_S,
        KC_0,   KC_T, KC_T, KC_S
    )

};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [2] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },

};
#endif

#ifdef OLED_ENABLE

// Draw to OLED
bool oled_task_user() {
    // Set cursor
    oled_set_cursor(0, 1);

    // Switch on current active layer
    switch (get_highest_layer(layer_state)) {
        case _BASE :
            oled_write("Main Layer", false);
            break;
        case _RAISE :
            oled_write("Code Layer", false);
            break;
        case _LOWER :
            oled_write("Function Layer", false);
            break;
    }
    return false;
}

#endif