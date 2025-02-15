#include QMK_KEYBOARD_H
#include "keymap_german.h"

// Config
#define LAYER_COUNT 6
#define ENCODER_DEBOUNCE_TIME 10 // ms
#define ________ KC_TRNS

enum custom_keycodes {
    HAL_WE = SAFE_RANGE,
    DEL_ALL,
    CYC_LAY_UP,
    CYC_LAY_DW,
    RL_CH_A,
    RL_CH_B,
    DC_MUTE
};

enum layer_names { _BASE, _MEDIA, _WINDOWS, _ROCKET_LEAGUE, _DISCORD, _BROWSER };

// Layers
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        CYC_LAY_DW, KC_NO,     CYC_LAY_UP,
        KC_BSPC,    KC_NO,     KC_LGUI,
        KC_A,       KC_B,      KC_C,
        KC_X,       KC_Y,      KC_Z
    ),
    [_MEDIA] = LAYOUT(
        ________,   KC_NO,     ________,
        KC_MPRV,    KC_NO,     KC_MNXT,
        KC_NO,      KC_VOLU,   KC_MUTE,
        KC_MSTP,    KC_VOLD,   KC_MPLY
    ),
    [_WINDOWS] = LAYOUT(
        ________,   KC_NO,     ________,
        LCTL(KC_C), KC_NO,     KC_PSTE,
        LCTL(KC_A), KC_MYCM,   KC_CALC,
        LGUI(KC_3), LGUI(KC_4),KC_NO
    ),
    [_ROCKET_LEAGUE] = LAYOUT(
        ________,   KC_NO,     ________,
        KC_NO,      KC_NO,     KC_NO,
        RL_CH_A,    RL_CH_B,   KC_NO,
        KC_NO,      KC_NO,     KC_NO
    ),
    [_DISCORD] = LAYOUT(
        ________,   KC_NO,     ________,
        LCTL(KC_GRV),KC_NO,    LGUI(KC_7),
        KC_NO,      KC_NO,     KC_NO,
        KC_NO,      KC_NO,     QK_BOOT
    ),
    [_BROWSER] = LAYOUT(
        ________,   KC_NO,     ________,
        DEL_ALL,    KC_NO,     LGUI(KC_1),
        LALT(KC_LEFT), KC_UP,  LALT(KC_RGHT),
        KC_LEFT,    KC_DOWN,   KC_RGHT
    )
};

// Custom Macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) return true;

    switch (keycode) {
        case HAL_WE:    SEND_STRING("Hello World!"); break;
        case DEL_ALL:   tap_code16(C(KC_A));
                        tap_code(KC_BSPC);
                        break;
        case CYC_LAY_UP:layer_move((get_highest_layer(layer_state) + 1) % LAYER_COUNT); break;
        case CYC_LAY_DW:layer_move((get_highest_layer(layer_state) + (LAYER_COUNT - 1)) % LAYER_COUNT); break;
        case RL_CH_A:   tap_code(KC_T);
                        SEND_STRING("What are you doing?");
                        tap_code(KC_ENT);
                        break;
        case RL_CH_B:   tap_code(KC_T);
                        SEND_STRING("BIG GG");
                        tap_code(KC_ENT);
                        break;
        
        case DC_MUTE:   register_code(KC_LCTL);
                        register_code(KC_LSFT);
                        tap_code(KC_M);
                        unregister_code(KC_LCTL);
                        unregister_code(KC_LSFT);
                        break;
    }
    return true;
}

// Encoder
static uint16_t last_encoder_activity = 0;
uint16_t encoder_value_L = 0;
uint16_t encoder_value_R = 0;

bool encoder_update_user(uint8_t index, bool clockwise) {
    uint16_t current_time = timer_read();
    if (TIMER_DIFF_16(current_time, last_encoder_activity) < ENCODER_DEBOUNCE_TIME) {
        return false;
    }
    
    last_encoder_activity = current_time;
    
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLD);
            encoder_value_L++;
        } else {
            tap_code(KC_VOLU);
            encoder_value_L--;
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_LEFT);
            encoder_value_R++;
        } else {
            tap_code(KC_RGHT);
            encoder_value_R--;
        }
    }
    return false;
}

void keyboard_post_init_user(void) {
    last_encoder_activity = timer_read();
}
