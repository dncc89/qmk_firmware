#ifndef DNCC89
#define DNCC89
#include "quantum.h"

// Custom keycodes
#define KC_FNSH LT(_FN1, KC_SLSH)
#define KC_FNCP LT(_FN1, KC_CAPS)

//      Keymap         Presets
#define QWERTY_R1      KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9     , KC_0    , KC_MINS , KC_EQL  , KC_BSLS, KC_QUOT
#define QWERTY_R1_ANSI KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9     , KC_0    , KC_MINS , KC_EQL  , KC_BSLS
#define QWERTY_R2      KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , KC_Y    , KC_U    , KC_I    , KC_O     , KC_P    , KC_LBRC , KC_RBRC , KC_BSPC
#define QWERTY_R3      KC_FNCP , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    , KC_H    , KC_J    , KC_K    , KC_L     , KC_SCLN , KC_QUOT , KC_ENT
#define QWERTY_R4_ANSI KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , KC_N    , KC_M    , KC_COMM , KC_DOT   , KC_FNSH , KC_RSFT
#define QWERTY_R4      KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , KC_N    , KC_M    , KC_COMM , KC_DOT   , KC_FNSH , KC_RSFT, KC_FN
#define QWERTY_R5_OLD  KC_LGUI , KC_LALT , KC_LCTL , KC_SPC  , KC_LGUI , KC_RALT , KC_LCTL
#define QWERTY_R5_HHKB KC_LALT , KC_LCTL , KC_SPC  , KC_LGUI , KC_RALT

#define FN1_R1         RESET   , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9    , KC_F10  , KC_F11  , KC_F12  , _______ , _______
#define FN1_R1_ANSI    RESET   , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9    , KC_F10  , KC_F11  , KC_F12  , _______
#define FN1_R2         _______ , KC_BSPC , KC_DEL  , KC_ENT  , _______ , _______ , _______ , _______ , _______ , _______  , _______ , KC_BRID , KC_BRIU , _______
#define FN1_R3         _______ , KC_VOLD , KC_MUTE , KC_VOLU , _______ , _______ , KC_LEFT , KC_DOWN , KC_UP   , KC_RIGHT , _______ , _______ , _______
#define FN1_R4         _______ , KC_BTN1 , KC_BTN2 , _______ , _______ , KC_MS_L , KC_MS_D , KC_MS_U , KC_MS_R , _______  , _______ , _______
#define FN1_R4_ANSI    _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______  , _______
#define FN1_R5_OLD     _______ , _______ , _______ , _______ , _______ , _______ , _______
#define FN1_R5_HHKB    _______ , _______ , _______ , _______ , _______
