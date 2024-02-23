#include QMK_KEYBOARD_H
#include "ys.h"
// clang-format off
enum layer_names {
   _QWERTY,
   _NUR,//num
   _NUL,//num
   _NV,//nav
   _CTR, //
   _MO //mouse
};
// KC_F1  

enum {
  TD_NUM_F1 = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_QWERTY] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______          , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      KC_ESC  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T             , _______ ,         _______ , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_BSPC, 
      KC_TAB  , KC_A    , KC_S    , KC_D    , KC_F    , KC_G             , _______ ,         _______ , KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_ENT ,  
      KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B             , _______ ,         _______ , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT,   
      _______ , _______ , _______ , MO(_NUR) ,           LT(_CTR, KC_SPC) , MO(_NV) ,         MO(_NV) , LT(_MO , KC_SPC)  ,          MO(_NUL), _______ , _______ , _______),
    [_NUL] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,        _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      KC_TAB  , KC_F12  , KC_F11  , KC_F10  , KC_F6   , KC_F5   , _______ ,        _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , KC_9    , KC_8    , KC_7    , KC_6    , KC_5    , _______ ,        _______ , _______ , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , _______, 
      _______ , KC_4    , KC_3    , KC_2    , KC_1    , KC_0    , _______ ,        _______ , KC_PGUP , KC_HOME , KC_DEL  , KC_END  , KC_PGDN , _______, 
      _______ , _______ , _______ , _______ ,           _______ , _______ ,        _______ , _______ ,           _______ , _______ , _______ , _______ ),   
    [_NUR] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      KC_TAB  , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , KC_F5   , KC_F6   , KC_F10  , KC_F11  , KC_F12  , _______, 
      _______ , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , _______ , _______ ,         _______ , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , _______, 
      _______ , KC_PGUP , KC_HOME , KC_DEL  , KC_END  , KC_PGDN , _______ ,         _______ , KC_0    , KC_1    , KC_2    , KC_3    , KC_4    , _______, 
      _______ , _______ , _______ , _______ ,           _______ , _______ ,         _______ , _______ ,           _______ , _______ , _______ , _______ ),   
    [_NV] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      KC_TAB  , KC_F12  , KC_F11  , KC_F10  , KC_F6   , KC_F5   , _______ ,         _______ , KC_MINS , LSFT(KC_A9) , KC_EQL(KC_A0)  , KC_LBRC , KC_RBRC , KC_BSLS, 
      _______ , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , _______ , _______ ,         _______ , KC_EQL  , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , KC_RALT, 
      _______ , KC_PGUP , KC_HOME , KC_DEL  , KC_END  , KC_PGDN , _______ ,         _______ , KC_PGUP , KC_HOME , KC_DEL  , KC_END  , KC_PGDN , _______, 
      _______ , _______ , _______ , _______ ,           _______ , _______ ,         _______ , _______ ,           _______ , _______ , _______ , _______ ), 
    [_CTR] = LAYOUT(
      _______       , _______    , _______    , _______    , _______    , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______       , _______    , _______    , _______    , _______    , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      LCTL(KC_LALT) , LCTL(KC_A) , LCTL(KC_S) , _______    , LCTL(KC_F) , _______ , _______ ,         _______ , _______ , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , _______, 
      LCTL(KC_LSFT) , LCTL(KC_Z) , LCTL(KC_X) , LCTL(KC_C) , LCTL(KC_V) , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______       , _______    , _______    , _______    ,              _______ , _______ ,         _______ , _______ ,           _______ , _______ , _______ , _______ ),   

    [_MO] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______ , 
      _______ , KC_WH_L , KC_WH_D , KC_WH_U , KC_WH_R , _______ , _______ ,         _______ , _______ , KC_WH_L , KC_WH_D , KC_WH_U , KC_WH_R , _______ , 
      _______ , KC_MS_L , KC_MS_D , KC_MS_U , KC_MS_R , _______ , _______ ,         _______ , _______ , KC_MS_L , KC_MS_D , KC_MS_U , KC_MS_R , _______ , 
      _______ , KC_BTN1 , KC_BTN2 , KC_BTN3 , KC_BTN4 , _______ , _______ ,         _______ , _______ , KC_BTN1 , KC_BTN2 , KC_BTN3 , KC_BTN4 , _______ , 
      _______ , _______ , _______ , _______ ,           _______ , _______ ,         _______ , _______ ,           _______ , _______ , _______ , _______  )

  //  [_MOU] = LAYOUT( 
  //     KC_GRV ,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F9,           _______,   _______,   _______,   _______,    KC_F9,   KC_MINS,  KC_EQL,  
  //     _______,  _______, _______,   KC_UP,  _______, _______, KC_F10,     _______, _______ , _______,  KC_UP, KC_LBRC,  KC_RBRC, TO(_MAC),
  //     KC_ENT,  _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_F11,         _______,  _______, KC_LEFT, KC_DOWN,  KC_RGHT,    KC_QUOT, _______, 
  //     _______,  _______, KC_PGUP,  KC_DEL,  KC_PGDN, _______, KC_F12,        _______, _______, KC_HOME, KC_DEL,  KC_END ,   _______, _______, 
  //     _______,  _______, _______, _______,      MO(_MOUSE), _______,         _______,  MO(_MOUSE),          _______,  _______ ,  _______, _______ ),

  //  [_MAC] = LAYOUT(
  //     KC_ESC,   KC_1,    KC_2,    KC_3,     KC_4,    KC_5,    KC_F5,         KC_F10 ,     KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_BSPC, 
  //     KC_TAB,   KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,    KC_F6,         KC_F11,     KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_BSLS, 
  //     KC_CAPS,  KC_A,    KC_S,    KC_D,     KC_F,    KC_G,    KC_F7,         KC_F12,     KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_ENT,  
  //     KC_LSFT,  KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    KC_F8,         KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT,   
  //     KC_LCTL, KC_LALT,  KC_LWIN, KC_LWIN,          KC_SPC,  MO(_FN2),     MO(_FN2), KC_SPC,            MO(_FN2) , KC_F18,  MO(_FN1),   KC_RCTL),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
   return true;
}
// clang-format on