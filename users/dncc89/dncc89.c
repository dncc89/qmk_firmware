#include "dncc89.h"

LEADER_EXTERNS();
bool shift_disabled = false;
bool delete_pressed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Shift + Backspace -> Delete
    if (keycode == KC_BSPC) {
        if (record->event.pressed) {
            if (keyboard_report->mods & MOD_BIT(KC_LSFT)) {
                delete_pressed = true;
                shift_disabled = true;
                unregister_code(KC_LSFT);
                register_code(KC_DEL);
                return false;
            }
        } else if (delete_pressed) {
            delete_pressed = false;
            unregister_code(KC_DEL);

            if (shift_disabled) {
                shift_disabled = false;
                register_code(KC_LSFT);
            }
            return false;
        }
    }
    return true;
}
