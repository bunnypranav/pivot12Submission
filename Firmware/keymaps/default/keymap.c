#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _NAV,
    _CODE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_HOME,  KC_UP,     KC_END,    KC_PGUP,
        KC_LEFT,  KC_DOWN,   KC_RGHT,   KC_PGDN,
        KC_ESC,  KC_TAB,   KC_BSPC,   KC_DEL
    ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {

    switch (get_highest_layer(layer_state)) {

        default:
            if (index == 0) {
                tap_code(clockwise ? KC_VOLU : KC_VOLD);
            } else if (index == 1) {
                tap_code(clockwise ? KC_RIGHT : KC_LEFT);
            }
            break;
    }

    return false;
}
