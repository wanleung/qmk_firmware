// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _L1 1
#define _L2 2
#define _L3 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT( /* Qwerty */
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P    ,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN ,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH ,
    KC_GESC, KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, MO(_L1), MO(_L2), KC_SPC,  KC_RSFT, MO(_L3), KC_DEL,  KC_ENT
  ),

  [_L1] = LAYOUT( /* [> L1 <] */
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0    ,
    KC_TAB,  KC_NO,   KC_NO,   KC_NO,   KC_TAB,                    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_BSLS ,
    KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOT ,
    KC_GRV,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RSFT, KC_BSPC, KC_TRNS, KC_NO,   KC_INS,  KC_TRNS ),

  [_L2] = LAYOUT( /* [> L2 <] */
    KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR,   KC_ASTR, KC_LPRN,  KC_RPRN ,
    KC_TAB,   KC_PSCR, KC_SLCK, KC_PAUS, KC_TAB,                    KC_LEFT, KC_DOWN,   KC_UP,   KC_RIGHT, KC_PIPE ,
    KC_ESC,   KC_NO,   KC_NO,   KC_NO,   KC_CAPS,                   KC_UNDS, KC_PLUS,   KC_LCBR, KC_RCBR,  KC_DQUO ,
    KC_GRV,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,  KC_TRNS,  KC_BSPC, KC_TRNS,   KC_NO,   KC_INS,   KC_TRNS ),

  [_L3] = LAYOUT( /* [> L3 <] */
    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10  ,
    KC_F11,   RGB_MOD,  RGB_HUI,  RGB_SAI,  RGB_VAI,                   RGB_SPI, KC_NO,   KC_NO,   KC_VOLU, KC_F12  ,
    RGB_TOG,  RGB_RMOD, RGB_HUD,  RGB_SAD,  RGB_VAD,                   RGB_SPD, KC_NO,   KC_NO,   KC_VOLD, KC_MUTE ,
    EEP_RST,  RESET,    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_EJCT )
};
