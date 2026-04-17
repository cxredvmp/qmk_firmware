// Copyright 2023 Vitalii Chyhryn
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define SYM 1
#define NAV 2
#define NUM 3
#define FUN 4
#define MED 5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_GRV,   KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,      KC_Y, KC_U,         KC_I,         KC_O,         KC_P,            KC_NO,
        KC_LBRC, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,      KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT,
        KC_RBRC, KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,      KC_N, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,         KC_BSLS,
        LT(MED, KC_ESC), LT(NAV, KC_TAB), LT(SYM, KC_SPC),                          LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL)
    ),
    [SYM] = LAYOUT_split_3x6_3(
        KC_TRNS,  KC_QUES,  KC_PLUS,  KC_MINS,  KC_EXLM,  KC_QUOT,      KC_DQUO,  KC_HASH,  KC_LBRC,  KC_RBRC,  KC_AT,    KC_TRNS,
        KC_TRNS,  KC_LT,    KC_COLN,  KC_EQL,   KC_GT,    KC_UNDS,      KC_BSLS,  KC_COMM,  KC_LPRN,  KC_RPRN,  KC_SCLN,  KC_TRNS,
        KC_TRNS,  KC_PIPE,  KC_ASTR,  KC_SLSH,  KC_AMPR,  KC_TILD,      KC_PERC,  KC_CIRC,  KC_LCBR,  KC_RCBR,  KC_DLR,   KC_TRNS,
                                      KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    [NAV] = LAYOUT_split_3x6_3(
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   KC_TRNS,
                                      KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    [NUM] = LAYOUT_split_3x6_3(
        KC_TRNS,  KC_TRNS,  KC_7,     KC_8,     KC_9,     KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_4,     KC_5,     KC_6,     KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_1,     KC_2,     KC_3,     KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                      KC_TRNS,  KC_0,     KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    [FUN] = LAYOUT_split_3x6_3(
        KC_TRNS,  KC_TRNS,  KC_F7,    KC_F8,    KC_F9,    KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_F4,    KC_F5,    KC_F6,    KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                      KC_F10,   KC_F11,   KC_F12,       KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    [MED] = LAYOUT_split_3x6_3(
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                      KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_MPLY,  KC_MUTE,  KC_TRNS
    ),
};
