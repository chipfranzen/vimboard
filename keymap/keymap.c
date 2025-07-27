#include QMK_KEYBOARD_H

#define GRAVE_MODS  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

enum layer_names {
    BASE,
    AUX,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT (
    KC_H, KC_J, KC_K, KC_L,
    MO(AUX)
  ),
  [AUX] = LAYOUT (
    KC_W, KC_E, KC_B, KC_T,
    XXXXXXX
  )
};
