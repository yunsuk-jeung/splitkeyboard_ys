#include QMK_KEYBOARD_H
#include "ys.h"

enum layer_names {
   _QWERTY,
   _FN1,
   _MAC,
   _FN2,
   _MOUSE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_QWERTY] = LAYOUT(
      KC_ESC,   KC_1,    KC_2,    KC_3,     KC_4,    KC_5,    KC_F5,           KC_F10  ,     KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_BSPC, 
      KC_TAB,   KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,    KC_F6,           KC_F11 ,     KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_BSLS, 
      KC_CAPS,  KC_A,    KC_S,    KC_D,     KC_F,    KC_G,    KC_F7,           KC_F12 ,     KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_ENT,  
      KC_LSFT,  KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    KC_F8,           KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT,   
      KC_LCTL,  KC_LWIN, KC_LALT, KC_LALT,          KC_SPC,  MO(_FN1),       MO(_FN1),     KC_SPC,            MO(_FN1),KC_RALT,  MO(_FN1),   KC_RCTL),
   [_FN1] = LAYOUT( 
      KC_GRV ,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F9,           _______,   _______,   _______,   _______,    KC_F9,   KC_MINS,  KC_EQL,  
      _______,  _______, _______,   KC_UP,  _______, _______, KC_F10,     _______, _______ , _______,  KC_UP, KC_LBRC,  KC_RBRC, TO(_MAC),
      KC_ENT,  _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_F11,         _______,  _______, KC_LEFT, KC_DOWN,  KC_RGHT,    KC_QUOT, _______, 
      _______,  _______, KC_PGUP,  KC_DEL,  KC_PGDN, _______, KC_F12,        _______, _______, KC_HOME, KC_DEL,  KC_END ,   _______, _______, 
      _______,  _______, _______, _______,      MO(_MOUSE), _______,         _______,  MO(_MOUSE),          _______,  _______ ,  _______, _______ ),
   [_MAC] = LAYOUT(
      KC_ESC,   KC_1,    KC_2,    KC_3,     KC_4,    KC_5,    KC_F5,         KC_F10 ,     KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_BSPC, 
      KC_TAB,   KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,    KC_F6,         KC_F11,     KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_BSLS, 
      KC_CAPS,  KC_A,    KC_S,    KC_D,     KC_F,    KC_G,    KC_F7,         KC_F12,     KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_ENT,  
      KC_LSFT,  KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    KC_F8,         KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT,   
      KC_LCTL, KC_LALT,  KC_LWIN, KC_LWIN,          KC_SPC,  MO(_FN2),     MO(_FN2), KC_SPC,            MO(_FN2) , KC_F18,  MO(_FN1),   KC_RCTL),
   [_FN2] = LAYOUT(
      KC_GRV , KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F9,          _______, _______,  _______,   _______,    KC_F9,   KC_MINS,  KC_EQL,  
      _______,  _______, _______, KC_UP,   _______,    _______, KC_F10,   _______, _______ ,  _______,   KC_UP,      KC_LBRC,  KC_RBRC, TO(_QWERTY),
      KC_ENT ,  _______,  KC_LEFT, KC_DOWN, KC_RGHT,    _______, KC_F11,          _______, _______,  KC_LEFT,   KC_DOWN,    KC_RGHT,  KC_QUOT, _______, 
      _______, _______,  KC_PGUP,  KC_DEL,  KC_PGDN,   _______, KC_F12,          _______, _______,  KC_HOME,   KC_DEL,     KC_END ,  _______ , _______, 
      _______,  _______, _______, _______,           MO(_MOUSE), _______,         _______,  MO(_MOUSE),             _______,    _______, _______, _______ ),
   [_MOUSE] = LAYOUT(
      _______ , _______, _______, _______, _______, _______, _______,          _______, _______,  _______,   _______,  _______,   _______,  _______,  
      _______, KC_BTN2, KC_BTN1, KC_MS_U,  KC_WH_U, KC_WH_D, _______,          _______, KC_WH_D ,  KC_WH_U,  KC_MS_U, KC_BTN1,  KC_BTN2, _______,
      _______, _______,  KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,          _______, _______,  KC_MS_L,   KC_MS_D, KC_MS_R,  _______, _______, 
      _______, KC_BTN3, KC_BTN4, _______, KC_WH_L, KC_WH_R, _______,         _______, KC_WH_R,  KC_WH_L,   _______, KC_BTN4 ,  KC_BTN3 , _______, 
      _______, _______, _______, _______,            _______, _______,         _______, _______,             _______, _______, _______, _______ ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
   return true;
}
