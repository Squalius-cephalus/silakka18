// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ENT│
     * ├───┼───┼───┤───┤
     * │ 4 │ 5 │ 6 │ - │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ + │
     * ├───┼───┼───┤───┤
     * │ / │ 0 │ . │SFT│
     * └───┴───┴───┴───┘
     * ┌────┐ ┌────┐
     * │MUTE│ │STOP│
     * └────┘ └────┘
     */
    [0] = LAYOUT_numpad_4x4_2(
        KC_P7,   KC_P8,   KC_P9,   KC_KP_ENTER,
        KC_P4,   KC_P5,   KC_P6,   KC_KP_MINUS,
        KC_P1,   KC_P2,   KC_P3,   KC_KP_PLUS,
        KC_PSLS,   KC_P0,   KC_KP_DOT,   KC_LSFT,
        KC_AUDIO_MUTE,   KC_MPLY
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT)  },
    //                  Encoder 1                                     Encoder 2
};
#endif