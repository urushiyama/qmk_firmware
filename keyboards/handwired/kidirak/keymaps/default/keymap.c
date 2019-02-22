/* Copyright 2019 urushiyama
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum unicode_names {
  HAPPY,
  ANGLY,
  SAD,
  FUN,
};

const uint32_t PROGMEM unicode_map[] = {
    [HAPPY] = 0x1F60A,
    [ANGLY] = 0x1F621,
    [SAD]   = 0x1F622,
    [FUN]   = 0x1F606,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(/* Base */
    X(HAPPY),  X(ANGLY), \
    X(SAD),    X(FUN)
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {
  set_unicode_input_mode(UC_OSX);
}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
