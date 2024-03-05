// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
     * |───┴───┴───┴───┴───┴───|       |───┴───┴───┴───┴───┴───|
     * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
     * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
     *                     [  ][  ]   [  ][  ]     
     *         [  ][  ][  ][  ][  ]   [  ][  ][  ][  ][  ]
     *             
     *                     
     *                         
     */
    [0] = LAYOUT_ortho_6x6_5(
        KC_ESC,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                       KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,          
        KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                       KC_4,   KC_5,   KC_6,   KC_A,   KC_B,   KC_R,
        KC_1,   KC_2,   KC_3,   KC_M,   KC_0,   KC_K,                       KC_1,   KC_2,   KC_3,   KC_M,   KC_0,   KC_K,
        KC_0,   KC_T,   KC_6,   KC_4,   KC_2,   KC_Q,                       KC_0,   KC_T,   KC_6,   KC_4,   KC_2,   KC_Q,
                                        KC_0,   KC_1,                       KC_0,   KC_1,
                KC_3,   KC_I,   KC_9,   KC_5,   KC_4,                       KC_3,   KC_I,   KC_9,   KC_5,   KC_4
    )

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),             ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)  },
}; 
#endif