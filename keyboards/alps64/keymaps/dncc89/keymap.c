#include QMK_KEYBOARD_H
#include "dncc89.h"

#define LAYOUT_WRAPPER(...) LAYOUT_aek_103(__VA_ARGS__)

enum layers {
  _QWERTY = 0,
  _FN1,
  _FN2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_WRAPPER(
        QWERTY_R1     ,
        QWERTY_R2     ,
        QWERTY_R3     ,
        QWERTY_R4     ,
        QWERTY_R5_WKL ) ,

    [_FN1] = LAYOUT_WRAPPER(
        FN1_R1     ,
        FN1_R2     ,
        FN1_R3     ,
        FN1_R4     ,
        FN1_R5_WKL ) ,

    [_FN2] = LAYOUT_WRAPPER(
        FN2_R1     ,
        FN2_R2     ,
        FN2_R3     ,
        FN2_R4     ,
        FN2_R5_WKL )
};
