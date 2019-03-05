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

enum custom_layers {
  BASE = 0,
  FN_MO, /* Momentary */
  FN_LO  /* Locked */
};

/*
 * - Base Layer
 *
 * ,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
 * |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | \ | ` |
 * |---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
 * |Tab  | q | w | e | r | t | y | u | i | o | p | [ | ] |  Del|
 * |-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'-----|
 * |Ctrl  | a | s | d | f | g | h | j | k | l | ; | ' |   Enter|
 * |------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'--------|
 * |Shift   | z | x | c | v | b | n | m | , | . | / |     Shift|
 * |-----.--'.--'-.-'---'---'---'---'---'--.'--.'--.'----.-----|
 * |Caps |Opt| Cmd|          Space         |Cmd|Opt| Ctrl|   Fn|
 * `-----'---'----'------------------------'---'---'-----'-----'
 *
 * - Shift Layer
 *
 * ,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
 * |Esc| ! | @ | # | $ | % | ^ | & | * | ( | ) | _ | + | | | ~ |
 * |---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
 * |Tab  | Q | W | E | R | T | Y | U | I | O | P | { | } |  Del|
 * |-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'-----|
 * |Ctrl  | A | S | D | F | G | H | J | K | L | : | " |   Enter|
 * |------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'--------|
 * |Shift   | Z | X | C | V | B | N | M | < | > | ? |     Shift|
 * |-----.--'.--'-.-'---'---'---'---'---'--.'--.'--.'----.-----|
 * |Caps |Opt| Cmd|          Space         |Cmd|Opt| Ctrl|   Fn|
 * `-----'---'----'------------------------'---'---'-----'-----'
 *
 * - Function (Fn) Layer
 *
 * ,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
 * |Pow|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|F13|Ejc|
 * |---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
 * |     |Ddw|Dup|   |   |   |   |<< |>||| >>|Sx |Sdw|Sup|     |
 * |-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'-----|
 * |      |   |   |   |   |   |   |   |   |   |-^ |   |        |
 * |------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'--------|
 * |L_Lock  |   |   |   |   |   |   |   |   |<- |-v |->        |
 * |-----.--'.--'-.-'--.'---'---'---'.--'-.-'--.'--.'----.-----|
 * |     |   |    |    |             |    |    |   |     |     |
 * `-----'---'----'----'-------------'----'----'---'-----'-----'
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_US_LIKE( /* Base */ \
    KC_ESC,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,      KC_EQL,     KC_BSLS,   KC_GRV, \
    KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,      KC_RBRC,    KC_BSPC, \
    KC_LCTRL,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,      KC_ENT, \
    KC_LSFT,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, \
    KC_CAPS,    KC_LALT,  KC_LCMD,  KC_SPACE, KC_RGUI,  KC_RALT,  KC_RCTRL, MO(FN_MO)
  ),
  [FN_MO] = LAYOUT_US_LIKE( /* Function Layer */ \
    KC_POWER,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,       KC_F12,     KC_F13,   KC_EJCT, \
    _______,    KC_BRMD,  KC_BRMU,  _______,  _______,  _______,  _______,  KC_MRWD,  KC_MPLY,  KC_MFFD,  KC__MUTE, KC__VOLDOWN,  KC__VOLUP,  _______, \
    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_UP,    _______,      _______, \
    TG(FN_LO),  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   KC_LEFT,  KC_DOWN,  KC_RIGHT, \
    _______,    _______,  _______,  _______,  _______,  _______,  _______,   MO(FN_MO)
  ),
  [FN_LO] = LAYOUT_US_LIKE( /* Function Layer (Locked) */ \
    KC_POWER,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,       KC_F12,     KC_F13,   KC_EJCT, \
    XXXXXXX,    KC_BRMD,  KC_BRMU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_MRWD,  KC_MPLY,  KC_MFFD,  KC__MUTE, KC__VOLDOWN,  KC__VOLUP,  XXXXXXX, \
    XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_UP,    XXXXXXX,      XXXXXXX, \
    TG(FN_LO),  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_RIGHT, \
    XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   TG(FN_LO)
  ),
};
