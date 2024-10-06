// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;
  }
  return rotation;
}
#endif


/**
* Put this somewhere at the beginning of the file --
* Make sure you import only one of animations at a time
* They all have same function exported, so it won't compile if you
* include more than one at a time. You can also configure some options
* before including the animation. Not all animations support them, but some do :P.
*/
#define ANIM_INVERT false
#define ANIM_RENDER_WPM true
#define FAST_TYPE_WPM 45 //Switch to fast animation when over words per minute

#ifdef OLED_ENABLE
#include "crab.c"
#endif

// -- Probably some other stuff and then --

#ifdef OLED_ENABLE
bool oled_task_user(void) {
  if (!is_keyboard_master()) {
    oled_render_anim();
  }
  return false;
}
#endif








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
  [0] = LAYOUT_6x6_5(
       KC_ESC ,    KC_1,    KC_2,    KC_3,   KC_4,  KC_5,     KC_6,  KC_7,  KC_8,    KC_9,   KC_0,     KC_RBRC,
       KC_TAB ,    KC_Q,    KC_W,    KC_E,   KC_R,  KC_T,     KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,     KC_LBRC,
       KC_LCTL,    KC_A,    KC_S,    KC_D,   KC_F,  KC_G,     KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOTE,
       KC_LSFT,    KC_Z,    KC_X,    KC_C,   KC_V,  KC_B,     KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT,

                               KC_LSFT, KC_LCTL, KC_LGUI,       KC_DEL ,  KC_ENT,  KC_SPC,
                        KC_LALT ,   MO(1),   KC_SPC,   KC_ENT,      KC_DEL,   KC_ENT,   KC_LGUI,  KC_ESC 
        ),

 };
