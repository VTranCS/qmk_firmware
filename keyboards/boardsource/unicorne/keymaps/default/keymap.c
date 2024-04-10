#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LCTL_T(KC_F)

// Right-hand home row mods
#define HOME_J RCTL_T(KC_J)
#define HOME_K RSFT_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_GRV, KC_LCTL, HOME_A, HOME_S, HOME_D, HOME_F, KC_G, KC_H, HOME_J, HOME_K, HOME_L, HOME_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC, KC_BSPC, MO(1), KC_SPC, KC_ENT, MO(2), KC_RALT),
	[1] = LAYOUT_split_3x6_3(_______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS, KC_PSCR, KC_LBRC, KC_RBRC, KC_BSLS, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_MS_BTN1, KC_MS_BTN2, _______, _______, _______, _______, MO(3), _______),
	[2] = LAYOUT_split_3x6_3(_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, KC_MSTP, KC_MPRV, KC_MRWD, KC_MFFD, KC_MNXT, _______, KC_PGUP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGDN, KC_LGUI, MO(3), _______, _______, _______, _______),
	[3] = LAYOUT_split_3x6_3(QK_BOOT, _______, _______, _______, _______, _______, RGB_VAI, RGB_HUI, RGB_SAI, RGB_MOD, RGB_TOG, _______, EE_CLR, _______, _______, _______, _______, _______, RGB_VAD, RGB_HUD, RGB_SAD, RGB_RMOD, CK_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, G(KC_L), _______, _______, _______, _______, QK_MACRO_1)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




