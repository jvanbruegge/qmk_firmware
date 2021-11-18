// Copyright 2021 Jan van Brügge (@jvanbruegge)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_A,    KC_1,    TG(_FN), KC_TAB
    ),
    [_FN] = LAYOUT(
        KC_B, KC_2, _______, KC_H
    )
};
