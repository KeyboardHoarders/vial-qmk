
/* Here is your compile command. This will convert to RP2040 

qmk flash -kb lily58/rev1 -km vialtrackpad -e CONVERT_TO=rp2040_ce */

#pragma once

/* VIAL UID for Lily58*/
#define VIAL_KEYBOARD_UID {0x7E, 0xFD, 0xFC, 0x5B, 0x7D, 0x39, 0x48, 0x06}

/* VIAL secure unlock keystroke - currently both big keys (typ. SPACE/ENTER) */
#define VIAL_UNLOCK_COMBO_ROWS {4, 9}
#define VIAL_UNLOCK_COMBO_COLS {4, 4}


// Trackpad support
//#define AZOTEQ_IQS5XX_TPS43
#define AZOTEQ_IQS5XX_WIDTH_MM  43
#define AZOTEQ_IQS5XX_HEIGHT_MM 30

#define AZOTEQ_IQS5XX_RESOLUTION_X 1400
#define AZOTEQ_IQS5XX_RESOLUTION_Y 1400

#define AZOTEQ_IQS5XX_TAP_ENABLE true
#define AZOTEQ_IQS5XX_TWO_FINGER_TAP_ENABLE true
#define AZOTEQ_IQS5XX_PRESS_AND_HOLD_ENABLE true
#define AZOTEQ_IQS5XX_SWIPE_X_ENABLE false
#define AZOTEQ_IQS5XX_SWIPE_Y_ENABLE false
#define AZOTEQ_IQS5XX_ZOOM_ENABLE   false



// Sensitivity tuning
#define AZOTEQ_IQS5XX_TAP_TIME 110
#define AZOTEQ_IQS5XX_TAP_DISTANCE 12
#define AZOTEQ_IQS5XX_HOLD_TIME 320
#define AZOTEQ_IQS5XX_TIMEOUT_MS 3
#define AZOTEQ_IQS5XX_SCROLL_INITIAL_DISTANCE 18

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS
/* Space reduction */

#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define VIAL_TAP_DANCE_ENTRIES 30
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT

/* Select hand configuration */

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT

#define MASTER_LEFT
// #define MASTER_RIGHT
//#define EE_HANDS
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

#define USE_SERIAL_PD2
//
#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100


