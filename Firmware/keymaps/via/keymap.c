#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS), [1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS), [2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS), [3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {[0] =
                                                             {
                                                                 {KC_TRNS, KC_TRNS}, // encoder 0
                                                                 {KC_TRNS, KC_TRNS}  // encoder 1
                                                             },
                                                         [1] = {{KC_TRNS, KC_TRNS}, {KC_TRNS, KC_TRNS}},
                                                         [2] = {{KC_TRNS, KC_TRNS}, {KC_TRNS, KC_TRNS}},
                                                         [3] = {{KC_TRNS, KC_TRNS}, {KC_TRNS, KC_TRNS}}};