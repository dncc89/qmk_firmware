// M60-A layout
#include QMK_KEYBOARD_H
#include "dncc89.h"

#define LAYOUT_WRAPPER(...) LAYOUT_60_hhkb(__VA_ARGS__)

enum layers {
  _QWERTY = 0,
  _FN1,
  _FN2,
  _FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_WRAPPER(
        QWERTY_R1         , KC_GRV ,
        QWERTY_R2         ,
        QWERTY_R3         ,
        QWERTY_R4         , FN1 ,
        QWERTY_R5_HHKB )  ,

    [_FN1] = LAYOUT_WRAPPER(
        FN1_R1         , _______  ,
        FN1_R2         ,
        FN1_R3         ,
        FN1_R4         , _______  ,
        FN1_R5_HHKB )  ,

    [_FN2] = LAYOUT_WRAPPER(
        FN2_R1         , _______  ,
        FN2_R2         ,
        FN2_R3         ,
        FN2_R4         , _______  ,
        FN2_R5_HHKB )  ,

    [_FN3] = LAYOUT_60_hhkb(
        _______ , EF_DEC  , EF_INC  , H1_DEC  , H1_INC   , H2_DEC  , H2_INC  , _______ , _______ , _______ , _______ , BR_DEC  , BR_INC  , _______ , _______ ,
        _______ , _______ , _______ , S1_DEC  , S1_INC   , S2_DEC  , S2_INC  , _______ , _______ , _______ , _______ , ES_DEC  , ES_INC  , _______ ,
        _______ , _______ , _______ , _______ , _______  , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , _______ , _______ , _______ , _______  , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , _______ , _______ , _______ , _______) ,
};
