// Copyright 2022 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "001.h"

#define A_Z         LALT_T(KC_Z)
#define G_X         LGUI_T(KC_X)
#define LT2_V       LT(2, KC_V)
#define LT3_B       LT(3, KC_B)
#define LT1_N       LT(1, KC_N)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
        KC_LSFT, A_Z,     G_X,     KC_C,    LT2_V,   LT3_B,   LT1_N,   KC_M,    KC_SPC,  KC_SPC
    ),

    [1] = LAYOUT(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        _______, KC_LBRC, KC_RBRC, KC_SLSH, KC_BSLS, KC_MINS, KC_EQL,  KC_SCLN, KC_QUOT, KC_GRV,  _______,
        _______, _______, _______, _______, _______, _______, _______, KC_COMM, KC_DOT,  KC_DOT
    ),

    [2] = LAYOUT(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______, KC_LCBR, KC_RCBR, KC_QUES, KC_PIPE, _______, KC_UNDS, KC_PLUS, KC_COLN, KC_DQUO, _______,
        _______, KC_LT,   KC_GT,   _______, _______, _______, _______, _______, _______, _______
    ),

    [3] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  RESET,
        KC_TAB,  KC_VOLU, KC_VOLD, KC_MUTE, KC_HOME, KC_END,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
        _______, KC_LALT, KC_LGUI, KC_PSCR, _______, _______, _______, _______, _______, _______
    ),

};
