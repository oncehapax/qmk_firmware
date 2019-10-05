/* Copyright 2019 mechmerlin
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

enum {
  TD_ESC_CAPS = 0
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes { QMKBEST = SAFE_RANGE, QMKURL };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(TD(0)),
};



void dance_flsh_finished(qk_tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            rgblight_toggle();
            break;
        case 2:
            rgblight_step();
            break;
        default: 
            for (uint8_t i = (state->count - 2); i > 0; i--) {
                rgblight_increase_hue();
            }
    }
}

//All tap dances now put together. Example 3 is "CT_FLASH"
qk_tap_dance_action_t tap_dance_actions[] = {
   [0] = ACTION_TAP_DANCE_FN_ADVANCED (NULL, dance_flsh_finished, NULL)
};