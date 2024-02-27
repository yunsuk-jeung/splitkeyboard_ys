#include QMK_KEYBOARD_H
#include "ys.h"
// clang-format off
enum layer_names {
   _QWERTY,
   //_NUR,//num
   _NUL,//num
   _FUN,
   _SYM,
   _NVL,//nav
   _NVR,//nav
   _CO,
   _MO //mouse
};

enum combos{
  S6_EQL
};
const uint16_t PROGMEM s6_combo[] = {KC_SLASH, KC_6, COMBO_END};

combo_t key_combos[] = {
  [S6_EQL] = COMBO(s6_combo, KC_EQL),
};

enum custom_keycodes {
    M_PRN = SAFE_RANGE,
    M_BRC,
    M_CBR,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_QWERTY] = LAYOUT(
      _______ , _______      , _______     , _______      , _______     , _______      , _______ ,         _______  , _______       , _______     , _______      , _______     , _______         , _______ , 
      _______ , LT(_FUN,KC_Q), KC_W        , KC_E         , KC_R        , KC_T         , _______ ,         _______  , KC_Y          , KC_U        , KC_I         , KC_O        , KC_P            , _______ , 
      _______ , LCTL_T(KC_A) , LGUI_T(KC_S), LALT_T(KC_D) , LSFT_T(KC_F), LCTL_T(KC_G) , _______ ,         _______  , LCTL_T(KC_H)  ,LSFT_T(KC_J) , LALT_T(KC_K) , LGUI_T(KC_L), LCTL_T(KC_SCLN) , _______ ,  
      _______ , LT(_MO,KC_Z) , KC_X        , KC_C         , KC_V        , KC_B         , _______ ,         _______  , KC_N          , KC_M        , KC_COMM      , KC_DOT      , LT(_MO,KC_SLSH ), _______ ,   
      _______ , _______      , _______     , MO(_NUL)     ,               KC_SPC       , MO(_NVL) ,        MO(_NVR) , LT(_CO,KC_SPC),               MO(_SYM)     , _______     , _______         , _______),
    [_NUL] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,        _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , KC_ASTR , KC_9    , KC_8    , KC_7    , KC_PLUS , _______ ,        _______ , _______ , _______ , M_PRN   , M_CBR   , M_BRC   , _______, 
      _______ , KC_SLASH, KC_6    , KC_5    , KC_4    , KC_MINS , _______ ,        _______ , KC_PGUP , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , _______, 
      _______ , KC_DOT  , KC_3    , KC_2    , KC_1    , KC_0    , _______ ,        _______ , KC_PGDN , KC_HOME , KC_DEL  , KC_END  , _______ , _______, 
      _______ , _______ , _______ , _______ ,           _______ , _______ ,        _______ , _______ ,           _______ , _______ , _______ , _______ ),   
    [_FUN] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,        _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , _______ , KC_F1   , KC_F3   , KC_F2   , KC_F5   , _______ ,        _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , _______ , KC_F4   , KC_F9   , KC_F10  , KC_F11  , _______ ,        _______ , KC_PGUP , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , _______, 
      _______ , _______ , KC_F7   , KC_F8   , KC_F6   , KC_F12  , _______ ,        _______ , KC_PGDN , KC_HOME , KC_DEL  , KC_END  , KC_PGDN , _______, 
      _______ , _______ , _______ , _______ ,           _______ , _______ ,        _______ , _______ ,           _______ , _______ , _______ , _______ ),    
    [_CO] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,        _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,        _______ , KC_ASTR , KC_AMPR , M_PRN   , M_CBR   , M_BRC   , _______, 
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,        _______ , _______ , KC_UNDS , _______ , _______ , _______ , _______, 
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,        _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , _______ , _______ , _______ ,           _______ , _______ ,        _______ , _______ ,           _______ , _______ , _______ , _______ ),   
    [_SYM] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,        _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,        _______ , KC_BSLS , KC_UNDS , M_PRN   , M_CBR   , M_BRC ,  _______, 
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,        _______ , KC_TILD , KC_EXLM , KC_AMPR , KC_PIPE , KC_QUOT , _______, 
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,        _______ , KC_AT   , KC_HASH , KC_PERC , KC_CIRC , KC_ASTR , _______, 
      _______ , _______ , _______ , _______ ,           _______ , _______ ,        _______ , _______ ,           _______ , _______ , _______ , _______ ),   
    //[_NUR] = LAYOUT(
      //_______ , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      //KC_TAB  , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , KC_F5   , KC_F6   , KC_F10  , KC_F11  , KC_F12  , _______, 
      //_______ , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , _______ , _______ ,         _______ , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , _______, 
      //_______ , KC_PGUP , KC_HOME , KC_DEL  , KC_END  , KC_PGDN , _______ ,         _______ , KC_0    , KC_1    , KC_2    , KC_3    , KC_4    , _______, 
      //_______ , _______ , _______ , _______ ,           _______ , _______ ,         _______ , _______ ,           _______ , _______ , _______ , _______ ),   
    [_NVL] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , KC_ESC  , KC_GRV  , KC_UP   , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , KC_ENT  , KC_LEFT , KC_DOWN , KC_RGHT , KC_PGUP , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , KC_TAB  , KC_HOME , KC_DEL  , KC_END  , KC_PGDN , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , _______ , _______ , _______ ,           _______ , _______ ,         _______ , _______ ,           _______ , _______ , _______ , _______ ), 
    [_NVR] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______, 
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , KC_ASTR , KC_AMPR , KC_UP   , KC_UNDS , KC_BSPC , _______, 
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , KC_PGUP , KC_LEFT , KC_DOWN , KC_RGHT , KC_ENT  , _______, 
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , KC_PGDN , KC_HOME , KC_DEL  , KC_END  , KC_F18  , _______, 
      _______ , _______ , _______ , _______ ,           _______ , _______ ,         _______ , _______ ,           _______ , _______ , _______ , _______ ), 

    [_MO] = LAYOUT(
      _______ , _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ , _______ , 
      _______ , KC_WH_L , KC_WH_R , KC_WH_U , KC_WH_U , KC_WH_D , _______ ,         _______ , KC_WH_D , KC_WH_U , KC_MS_U , KC_WH_L , KC_WH_R , _______ , 
      _______ , _______ , KC_MS_L , KC_MS_D , KC_MS_R , _______ , _______ ,         _______ , _______ , KC_MS_L , KC_MS_D , KC_MS_R , _______ , _______ , 
      _______ , KC_BTN4 , KC_BTN3 , KC_BTN2 , KC_BTN1 , _______ , _______ ,         _______ , _______ , KC_BTN1 , KC_BTN2 , KC_BTN3 , KC_BTN4 , _______ , 
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
// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
  case M_PRN:  //Types [], {}, or <> and puts cursor between braces.
    if (record->event.pressed) {
      SEND_STRING("()");
      tap_code(KC_LEFT);  //Move cursor between braces.
    }
    return false;
  case M_BRC:  //Types [], {}, or <> and puts cursor between braces.
    if (record->event.pressed) {
      SEND_STRING("[]");
      tap_code(KC_LEFT);  //Move cursor between braces.
    }
    return false;
  case M_CBR:  //Types [], {}, or <> and puts cursor between braces.
    if (record->event.pressed) {
      SEND_STRING("{}");
      tap_code(KC_LEFT);  //Move cursor between braces.
    }
    return false;
  }
  return true;
}
