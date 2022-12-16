#include QMK_KEYBOARD_H
//#include <stdio.h>

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  SEND_00 = SAFE_RANGE,
  SEND_000
};

enum keymap_layer {
  KL_BASE,
  KL_NUMBER,
  KL_EXTRA,
};
enum encoder_number {
  _1ST_ENC = 0,
};

#define K2_MT   LCTL(LSFT(KC_M))
#define LT_TEST LT(KL_NUMBER, KC_Z) // Hold to change layer, tap to input space key

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [KL_BASE] = LAYOUT( // Base
    LCTL(LSFT(KC_M)),             // A switch in front
    LT_TEST,                      // A small tact switch
    KC_LCTL, KC_SPC, LCTL(KC_SPC) // Three switches in the back
  ),
  [KL_NUMBER] = LAYOUT(
    KC_1, KC_2, KC_3, KC_4, KC_5
  ),
  [KL_EXTRA] = LAYOUT(
    KC_A, KC_B, KC_C, KC_D, KC_E
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SEND_00:
      if (record->event.pressed) {
        // when keycode SEND_00 is pressed
        SEND_STRING("00");
      } else {
        // when keycode SEND_00 is released
      }
      break;
    case SEND_000:
      if (record->event.pressed) {
        // when keycode SEND_000 is pressed
        //SEND_STRING("000" SS_TAP(X_ENTER));
        SEND_STRING("000");
      } else {
        // when keycode SEND_000 is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {

}


bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == _1ST_ENC) {
    if (clockwise) {
        tap_code(KC_VOLD);
    } else {
        tap_code(KC_VOLU);
    }
  } else {
  }
  return true;
}

