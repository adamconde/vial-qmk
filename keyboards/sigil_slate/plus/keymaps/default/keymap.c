// Copyright 2025 adamconde
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// clang-format off

enum layers {
    BASE,
    L1,
    L2,
    L3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_numpad_6x5(
                  MO(0), KC_ESC,  KC_BSPC,  KC_TAB,
                  KC_NUM,   KC_PSLS, KC_PAST,  KC_PMNS,
                  KC_P7,    KC_P8,   KC_P9,    KC_PPLS,
                  KC_P4,    KC_P5,   KC_P6,
                  KC_P1,    KC_P2,   KC_P3,    KC_PENT,
        KC_MUTE,     KC_P0,             KC_PDOT),

    [L1] = LAYOUT_numpad_6x5(
                  _______,  _______, _______,  _______,
                  _______,  _______, _______,  _______,
                  _______,  _______, _______,  _______,
                  _______,  _______, _______,
                  _______,  _______, _______,  _______,
        _______,     _______,           _______),


    [L2] = LAYOUT_numpad_6x5(
                  _______,  _______, _______,  _______,
                  _______,  _______, _______,  _______,
                  _______,  _______, _______,  _______,
                  _______,  _______, _______,
                  _______,  _______, _______,  _______,
        _______,     _______,           _______),


    [L3] = LAYOUT_numpad_6x5(
                  _______,  _______, _______,  _______,
                  _______,  _______, _______,  _______,
                  _______,  _______, _______,  _______,
                  _______,  _______, _______,
                  _______,  _______, _______,  _______,
        _______,     _______,           _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [L1] = { ENCODER_CCW_CW(KC_WH_L, KC_WH_R) },
    [L2] = { ENCODER_CCW_CW(_______, _______) },
    [L3] = { ENCODER_CCW_CW(_______, _______) }
};
#endif // ENCODER_MAP_ENABLE