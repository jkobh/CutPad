#include "quantum.h"
#include <timer.h>
#include "bitmap.h"

#define ROWS 4
#define COLS 3

typedef struct {
    bool key_states[COLS][ROWS];
    bool key_deactiv[COLS][ROWS];
    uint8_t last_key_col;
    uint8_t last_key_row;
    uint32_t press_counter;
} KeyStatus;
KeyStatus key_status = {0};
void update_key_status(uint8_t col, uint8_t row, bool pressed) {
    if (col == 1 && (row == 0 || row == 1)) { return; }
    if (pressed) {
        key_status.last_key_col = col;
        key_status.last_key_row = row;
        if (!key_status.key_states[col][row]) {
            key_status.press_counter++;
            if (key_status.press_counter > 15) {
                key_status.press_counter = 1;
            }
        }
    }
    key_status.key_states[col][row] = pressed;
}

void last_key_display(void) {
    switch (key_status.last_key_col) {
        case 0:
            switch (key_status.last_key_row) {
                case 0:
                    // E
                    oled_write_pixel(0, 76, true);
                    oled_write_pixel(0, 77, true);
                    oled_write_pixel(0, 78, true);
                    oled_write_pixel(0, 79, true);
                    oled_write_pixel(0, 80, true);
                    oled_write_pixel(1, 76, true);
                    oled_write_pixel(1, 78, true);
                    oled_write_pixel(1, 80, true);
                    oled_write_pixel(2, 76, true);
                    oled_write_pixel(2, 80, true);

                    // N
                    oled_write_pixel(4, 76, true);
                    oled_write_pixel(4, 77, true);
                    oled_write_pixel(4, 78, true);
                    oled_write_pixel(4, 79, true);
                    oled_write_pixel(4, 80, true);
                    oled_write_pixel(5, 77, true);
                    oled_write_pixel(6, 78, true);
                    oled_write_pixel(7, 79, true);
                    oled_write_pixel(8, 76, true);
                    oled_write_pixel(8, 77, true);
                    oled_write_pixel(8, 78, true);
                    oled_write_pixel(8, 79, true);
                    oled_write_pixel(8, 80, true);

                    // C
                    oled_write_pixel(10, 76, true);
                    oled_write_pixel(10, 77, true);
                    oled_write_pixel(10, 78, true);
                    oled_write_pixel(10, 79, true);
                    oled_write_pixel(10, 80, true);
                    oled_write_pixel(11, 76, true);
                    oled_write_pixel(12, 76, true);
                    oled_write_pixel(11, 80, true);
                    oled_write_pixel(12, 80, true);
                    
                    // L
                    oled_write_pixel(16, 76, true);
                    oled_write_pixel(16, 77, true);
                    oled_write_pixel(16, 78, true);
                    oled_write_pixel(16, 79, true);
                    oled_write_pixel(16, 80, true);
                    oled_write_pixel(17, 80, true);
                    oled_write_pixel(18, 80, true);

                    break;
                case 1:
                    // D
                    oled_write_pixel(0, 76, true);
                    oled_write_pixel(0, 77, true);
                    oled_write_pixel(0, 78, true);
                    oled_write_pixel(0, 79, true);
                    oled_write_pixel(0, 80, true);
                    oled_write_pixel(1, 76, true);
                    oled_write_pixel(1, 80, true);
                    oled_write_pixel(2, 77, true);
                    oled_write_pixel(2, 78, true);
                    oled_write_pixel(2, 79, true);

                    // E
                    oled_write_pixel(4, 76, true);
                    oled_write_pixel(4, 77, true);
                    oled_write_pixel(4, 78, true);
                    oled_write_pixel(4, 79, true);
                    oled_write_pixel(4, 80, true);
                    oled_write_pixel(5, 76, true);
                    oled_write_pixel(5, 78, true);
                    oled_write_pixel(5, 80, true);
                    oled_write_pixel(6, 76, true);
                    oled_write_pixel(6, 80, true);

                    // L
                    oled_write_pixel(8, 76, true);
                    oled_write_pixel(8, 77, true);
                    oled_write_pixel(8, 78, true);
                    oled_write_pixel(8, 79, true);
                    oled_write_pixel(8, 80, true);
                    oled_write_pixel(9, 80, true);
                    oled_write_pixel(10, 80, true);
                    break;
                case 2:
                    // A
                    oled_write_pixel(0, 77, true);
                    oled_write_pixel(0, 78, true);
                    oled_write_pixel(0, 79, true);
                    oled_write_pixel(0, 80, true);
                    oled_write_pixel(1, 76, true);
                    oled_write_pixel(1, 78, true);
                    oled_write_pixel(2, 76, true);
                    oled_write_pixel(2, 78, true);
                    oled_write_pixel(3, 77, true);
                    oled_write_pixel(3, 78, true);
                    oled_write_pixel(3, 79, true);
                    oled_write_pixel(3, 80, true);
                    break;
                case 3:
                    // X
                    oled_write_pixel(0, 76, true);
                    oled_write_pixel(0, 80, true);
                    oled_write_pixel(1, 77, true);
                    oled_write_pixel(1, 79, true);
                    oled_write_pixel(2, 78, true);
                    oled_write_pixel(3, 77, true);
                    oled_write_pixel(3, 79, true);
                    oled_write_pixel(4, 76, true);
                    oled_write_pixel(4, 80, true);
                    break;
            }
            break;
        case 1:
            switch (key_status.last_key_row) {
                case 2:
                    // B
                    oled_write_pixel(0, 76, true);
                    oled_write_pixel(0, 77, true);
                    oled_write_pixel(0, 78, true);
                    oled_write_pixel(0, 79, true);
                    oled_write_pixel(0, 80, true);
                    oled_write_pixel(1, 76, true);
                    oled_write_pixel(1, 78, true);
                    oled_write_pixel(1, 80, true);
                    oled_write_pixel(2, 76, true);
                    oled_write_pixel(2, 78, true);
                    oled_write_pixel(2, 80, true);
                    oled_write_pixel(3, 77, true);
                    oled_write_pixel(3, 79, true);
                    break;
                case 3:
                    // Y
                    oled_write_pixel(0, 76, true);
                    oled_write_pixel(0, 77, true);
                    oled_write_pixel(0, 78, true);
                    oled_write_pixel(1, 78, true);
                    oled_write_pixel(1, 79, true);
                    oled_write_pixel(1, 80, true);
                    oled_write_pixel(2, 76, true);
                    oled_write_pixel(2, 77, true);
                    oled_write_pixel(2, 78, true);
                    break;
            }
            break;
        case 2:
            switch (key_status.last_key_row) {
                case 0:
                    // E
                    oled_write_pixel(0, 76, true);
                    oled_write_pixel(0, 77, true);
                    oled_write_pixel(0, 78, true);
                    oled_write_pixel(0, 79, true);
                    oled_write_pixel(0, 80, true);
                    oled_write_pixel(1, 76, true);
                    oled_write_pixel(1, 78, true);
                    oled_write_pixel(1, 80, true);
                    oled_write_pixel(2, 76, true);
                    oled_write_pixel(2, 80, true);

                    // N
                    oled_write_pixel(4, 76, true);
                    oled_write_pixel(4, 77, true);
                    oled_write_pixel(4, 78, true);
                    oled_write_pixel(4, 79, true);
                    oled_write_pixel(4, 80, true);
                    oled_write_pixel(5, 77, true);
                    oled_write_pixel(6, 78, true);
                    oled_write_pixel(7, 79, true);
                    oled_write_pixel(8, 76, true);
                    oled_write_pixel(8, 77, true);
                    oled_write_pixel(8, 78, true);
                    oled_write_pixel(8, 79, true);
                    oled_write_pixel(8, 80, true);

                    // C
                    oled_write_pixel(10, 76, true);
                    oled_write_pixel(10, 77, true);
                    oled_write_pixel(10, 78, true);
                    oled_write_pixel(10, 79, true);
                    oled_write_pixel(10, 80, true);
                    oled_write_pixel(11, 76, true);
                    oled_write_pixel(12, 76, true);
                    oled_write_pixel(11, 80, true);
                    oled_write_pixel(12, 80, true);
                    
                    // R
                    oled_write_pixel(16, 76, true);
                    oled_write_pixel(16, 77, true);
                    oled_write_pixel(16, 78, true);
                    oled_write_pixel(16, 79, true);
                    oled_write_pixel(16, 80, true);
                    oled_write_pixel(17, 76, true);
                    oled_write_pixel(17, 78, true);
                    oled_write_pixel(18, 77, true);
                    oled_write_pixel(18, 79, true);
                    oled_write_pixel(18, 80, true);
                    break;
                    case 1:
                    // C
                    oled_write_pixel(0, 76, true);
                    oled_write_pixel(0, 77, true);
                    oled_write_pixel(0, 78, true);
                    oled_write_pixel(0, 79, true);
                    oled_write_pixel(0, 80, true);
                    oled_write_pixel(1, 76, true);
                    oled_write_pixel(2, 76, true);
                    oled_write_pixel(1, 80, true);
                    oled_write_pixel(2, 80, true);

                    // T
                    oled_write_pixel(4, 76, true);
                    oled_write_pixel(5, 76, true);
                    oled_write_pixel(5, 77, true);
                    oled_write_pixel(5, 78, true);
                    oled_write_pixel(5, 79, true);
                    oled_write_pixel(5, 80, true);
                    oled_write_pixel(6, 76, true);
                    oled_write_pixel(7, 76, true);

                    // R
                    oled_write_pixel(10, 76, true);
                    oled_write_pixel(10, 77, true);
                    oled_write_pixel(10, 78, true);
                    oled_write_pixel(10, 79, true);
                    oled_write_pixel(10, 80, true);
                    oled_write_pixel(11, 76, true);
                    oled_write_pixel(11, 78, true);
                    oled_write_pixel(12, 77, true);
                    oled_write_pixel(12, 79, true);
                    oled_write_pixel(12, 80, true);
                    
                    // L
                    oled_write_pixel(14, 76, true);
                    oled_write_pixel(14, 77, true);
                    oled_write_pixel(14, 78, true);
                    oled_write_pixel(14, 79, true);
                    oled_write_pixel(14, 80, true);
                    oled_write_pixel(15, 80, true);
                    oled_write_pixel(16, 80, true);
                    break;
                case 2:
                    // C
                    oled_write_pixel(0, 77, true);
                    oled_write_pixel(0, 78, true);
                    oled_write_pixel(0, 79, true);
                    oled_write_pixel(1, 76, true);
                    oled_write_pixel(2, 77, true);
                    oled_write_pixel(1, 80, true);
                    oled_write_pixel(2, 79, true);
                    break;
                case 3:
                    // Z
                    oled_write_pixel(0, 76, true);
                    oled_write_pixel(0, 80, true);
                    oled_write_pixel(1, 76, true);
                    oled_write_pixel(1, 79, true);
                    oled_write_pixel(1, 80, true);
                    oled_write_pixel(2, 76, true);
                    oled_write_pixel(2, 78, true);
                    oled_write_pixel(2, 80, true);
                    oled_write_pixel(3, 76, true);
                    oled_write_pixel(3, 77, true);
                    oled_write_pixel(3, 80, true);
                    oled_write_pixel(4, 76, true);
                    oled_write_pixel(4, 80, true);
                    break;
            }
            break;
    }
}

extern uint16_t encoder_value_L;
extern uint16_t encoder_value_R;
void encoder_display(void) {
    oled_write_pixel(5, 90, true);
    if (encoder_value_L % 10 == 0) {
        oled_write_pixel(5, 87, true);
        oled_write_pixel(5, 88, true);
        oled_write_pixel(5, 89, true);
        oled_write_pixel(5, 91, true);
        oled_write_pixel(5, 92, true);
        oled_write_pixel(5, 93, true);
    } else if (encoder_value_L % 10 == 1) {
        oled_write_pixel(4, 87, true);
        oled_write_pixel(4, 88, true);
        oled_write_pixel(5, 89, true);
        oled_write_pixel(5, 91, true);
        oled_write_pixel(6, 92, true);
        oled_write_pixel(6, 93, true);
    } else if (encoder_value_L % 10 == 2) {
        oled_write_pixel(3, 87, true);
        oled_write_pixel(4, 88, true);
        oled_write_pixel(4, 89, true);
        oled_write_pixel(6, 91, true);
        oled_write_pixel(6, 92, true);
        oled_write_pixel(7, 93, true);
    } else if (encoder_value_L % 10 == 3) {
        oled_write_pixel(2, 88, true);
        oled_write_pixel(3, 89, true);
        oled_write_pixel(4, 89, true);
        oled_write_pixel(6, 91, true);
        oled_write_pixel(7, 91, true);
        oled_write_pixel(8, 92, true);
    } else if (encoder_value_L % 10 == 4) {
        oled_write_pixel(2, 89, true);
        oled_write_pixel(3, 89, true);
        oled_write_pixel(4, 90, true);
        oled_write_pixel(6, 90, true);
        oled_write_pixel(7, 91, true);
        oled_write_pixel(8, 91, true);
    } else if (encoder_value_L % 10 == 5) {
        oled_write_pixel(2, 90, true);
        oled_write_pixel(3, 90, true);
        oled_write_pixel(4, 90, true);
        oled_write_pixel(6, 90, true);
        oled_write_pixel(7, 90, true);
        oled_write_pixel(8, 90, true);
    } else if (encoder_value_L % 10 == 6) {
        oled_write_pixel(2, 91, true);
        oled_write_pixel(3, 91, true);
        oled_write_pixel(4, 90, true);
        oled_write_pixel(6, 90, true);
        oled_write_pixel(7, 89, true);
        oled_write_pixel(8, 89, true);
    } else if (encoder_value_L % 10 == 7) {
        oled_write_pixel(2, 92, true);
        oled_write_pixel(3, 91, true);
        oled_write_pixel(4, 91, true);
        oled_write_pixel(6, 89, true);
        oled_write_pixel(7, 89, true);
        oled_write_pixel(8, 88, true);
    } else if (encoder_value_L % 10 == 8) {
        oled_write_pixel(3, 93, true);
        oled_write_pixel(4, 92, true);
        oled_write_pixel(4, 91, true);
        oled_write_pixel(6, 89, true);
        oled_write_pixel(6, 88, true);
        oled_write_pixel(7, 87, true);
    } else if (encoder_value_L % 10 == 9) {
        oled_write_pixel(4, 93, true);
        oled_write_pixel(4, 92, true);
        oled_write_pixel(5, 91, true);
        oled_write_pixel(5, 89, true);
        oled_write_pixel(6, 88, true);
        oled_write_pixel(6, 87, true);
    }

    oled_write_pixel(25, 90, true);
    if (encoder_value_R % 10 == 0) {
        oled_write_pixel(25, 87, true);
        oled_write_pixel(25, 88, true);
        oled_write_pixel(25, 89, true);
        oled_write_pixel(25, 91, true);
        oled_write_pixel(25, 92, true);
        oled_write_pixel(25, 93, true);
    } else if (encoder_value_R % 10 == 1) {
        oled_write_pixel(24, 87, true);
        oled_write_pixel(24, 88, true);
        oled_write_pixel(25, 89, true);
        oled_write_pixel(25, 91, true);
        oled_write_pixel(26, 92, true);
        oled_write_pixel(26, 93, true);
    } else if (encoder_value_R % 10 == 2) {
        oled_write_pixel(23, 87, true);
        oled_write_pixel(24, 88, true);
        oled_write_pixel(24, 89, true);
        oled_write_pixel(26, 91, true);
        oled_write_pixel(26, 92, true);
        oled_write_pixel(27, 93, true);
    } else if (encoder_value_R % 10 == 3) {
        oled_write_pixel(22, 88, true);
        oled_write_pixel(23, 89, true);
        oled_write_pixel(24, 89, true);
        oled_write_pixel(26, 91, true);
        oled_write_pixel(27, 91, true);
        oled_write_pixel(28, 92, true);
    } else if (encoder_value_R % 10 == 4) {
        oled_write_pixel(22, 89, true);
        oled_write_pixel(23, 89, true);
        oled_write_pixel(24, 90, true);
        oled_write_pixel(26, 90, true);
        oled_write_pixel(27, 91, true);
        oled_write_pixel(28, 91, true);
    } else if (encoder_value_R % 10 == 5) {
        oled_write_pixel(22, 90, true);
        oled_write_pixel(23, 90, true);
        oled_write_pixel(24, 90, true);
        oled_write_pixel(26, 90, true);
        oled_write_pixel(27, 90, true);
        oled_write_pixel(28, 90, true);
    } else if (encoder_value_R % 10 == 6) {
        oled_write_pixel(22, 91, true);
        oled_write_pixel(23, 91, true);
        oled_write_pixel(24, 90, true);
        oled_write_pixel(26, 90, true);
        oled_write_pixel(27, 89, true);
        oled_write_pixel(28, 89, true);
    } else if (encoder_value_R % 10 == 7) {
        oled_write_pixel(22, 92, true);
        oled_write_pixel(23, 91, true);
        oled_write_pixel(24, 91, true);
        oled_write_pixel(26, 89, true);
        oled_write_pixel(27, 89, true);
        oled_write_pixel(28, 88, true);
    } else if (encoder_value_R % 10 == 8) {
        oled_write_pixel(23, 93, true);
        oled_write_pixel(24, 92, true);
        oled_write_pixel(24, 91, true);
        oled_write_pixel(26, 89, true);
        oled_write_pixel(26, 88, true);
        oled_write_pixel(27, 87, true);
    } else if (encoder_value_R % 10 == 9) {
        oled_write_pixel(24, 93, true);
        oled_write_pixel(24, 92, true);
        oled_write_pixel(25, 91, true);
        oled_write_pixel(25, 89, true);
        oled_write_pixel(26, 88, true);
        oled_write_pixel(26, 87, true);
    }
}

void layer_display(void) {
    switch (biton32(layer_state)){
        case 0:
            oled_write_raw_P(bitmap_1_image, sizeof(bitmap_1_image));
            break;
        case 1:
            oled_write_raw_P(bitmap_MEDIA_image, sizeof(bitmap_MEDIA_image));
            break;
        case 2:
            oled_write_raw_P(bitmap_WINDOWS_image, sizeof(bitmap_WINDOWS_image));
            break;
        case 3:
            oled_write_raw_P(bitmap_RL_image, sizeof(bitmap_RL_image));
            break;
        case 4:
            oled_write_raw_P(bitmap_DC_image, sizeof(bitmap_DC_image));
            break;
        case 5:
            oled_write_raw_P(bitmap_INTERNET_image, sizeof(bitmap_INTERNET_image));
            break;
        default:
            oled_write_raw_P(bitmap_Base_image, sizeof(bitmap_Base_image));
            break;
    }
}

uint8_t time_bar_width = 0;
uint32_t last_timer = 0;
bool timer_growing = true;
int oled_updates = 0;

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_90;
}

void draw_square(uint8_t x, uint8_t y, uint8_t z, bool filled) {
    for (uint8_t i = 0; i < z; i++) {
        for (uint8_t j = 0; j < z; j++) {
            oled_write_pixel(x + i, y + j, filled);
        }
    }
}

bool oled_task_user(void) {
    if (oled_updates > 50) {
        oled_clear();
        layer_display();
        oled_updates = 0;

        encoder_display();
        last_key_display();

        for (uint8_t col = 0; col < COLS; col++) {
            for (uint8_t row = 0; row < ROWS; row++) {
                if (col == 1 && (row == 0 || row == 1)) { continue; }

                if (row != 0 && key_status.key_states[col][row]) {
                    draw_square(2 + col * 10, 89 + row * 10, 7, true);
                } else if (key_status.key_states[col][row]) {
                    draw_square(2 + col * 10, 87 + row * 10, 7, true);
                    oled_write_pixel(2 + col * 10, 87 + row * 10, false);
                    oled_write_pixel(8 + col * 10, 87 + row * 10, false);
                    oled_write_pixel(8 + col * 10, 93 + row * 10, false);
                    oled_write_pixel(2 + col * 10, 93 + row * 10, false);
                } 
                
                if (row != 0 && key_status.key_deactiv[col][row]) {
                    oled_write_pixel(1 + col * 10, 96 + row * 10, true);
                    oled_write_pixel(2 + col * 10, 95 + row * 10, true);
                    oled_write_pixel(3 + col * 10, 94 + row * 10, true);
                    oled_write_pixel(4 + col * 10, 93 + row * 10, true);
                    oled_write_pixel(5 + col * 10, 92 + row * 10, true);
                    oled_write_pixel(6 + col * 10, 91 + row * 10, true);
                    oled_write_pixel(7 + col * 10, 90 + row * 10, true);
                    oled_write_pixel(8 + col * 10, 89 + row * 10, true);
                    oled_write_pixel(9 + col * 10, 88 + row * 10, true);
                } else if (key_status.key_deactiv[col][row]) {
                    oled_write_pixel(3 + col * 10, 85 + row * 10, false);
                    oled_write_pixel(4 + col * 10, 85 + row * 10, false);
                    oled_write_pixel(5 + col * 10, 85 + row * 10, false);
                    oled_write_pixel(6 + col * 10, 85 + row * 10, false);
                    oled_write_pixel(7 + col * 10, 85 + row * 10, false);
                    oled_write_pixel(8 + col * 10, 86 + row * 10, false);
                    oled_write_pixel(9 + col * 10, 87 + row * 10, false);

                    oled_write_pixel(10 + col * 10, 88 + row * 10, false);
                    oled_write_pixel(10 + col * 10, 89 + row * 10, false);
                    oled_write_pixel(10 + col * 10, 90 + row * 10, false);
                    oled_write_pixel(10 + col * 10, 91 + row * 10, false);
                    oled_write_pixel(10 + col * 10, 92 + row * 10, false);
                    oled_write_pixel(9 + col * 10, 93 + row * 10, false);
                    oled_write_pixel(8 + col * 10, 94 + row * 10, false);

                    oled_write_pixel(3 + col * 10, 95 + row * 10, false);
                    oled_write_pixel(4 + col * 10, 95 + row * 10, false);
                    oled_write_pixel(5 + col * 10, 95 + row * 10, false);
                    oled_write_pixel(6 + col * 10, 95 + row * 10, false);
                    oled_write_pixel(7 + col * 10, 95 + row * 10, false);
                    oled_write_pixel(1 + col * 10, 93 + row * 10, false);
                    oled_write_pixel(2 + col * 10, 94 + row * 10, false);

                    oled_write_pixel(0 + col * 10, 88 + row * 10, false);
                    oled_write_pixel(0 + col * 10, 89 + row * 10, false);
                    oled_write_pixel(0 + col * 10, 90 + row * 10, false);
                    oled_write_pixel(0 + col * 10, 91 + row * 10, false);
                    oled_write_pixel(0 + col * 10, 92 + row * 10, false);
                    oled_write_pixel(1 + col * 10, 87 + row * 10, false);
                    oled_write_pixel(2 + col * 10, 86 + row * 10, false);
                }
            }
        }
    }

    for (uint8_t i = 0; i < 31; i++) {
        oled_write_pixel(i * 2, 63, i < key_status.press_counter);
        oled_write_pixel(i, 65, i < time_bar_width);
    }

    oled_updates++;
    return true;
}

extern const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
void matrix_scan_user(void) {
    for (uint8_t col = 0; col < COLS; col++) {
        for (uint8_t row = 0; row < ROWS; row++) {
            if (col == 1 && (row == 0 || row == 1)) { continue; }
            bool current_state = matrix_is_on(row, col);
            key_status.key_deactiv[col][row] = (keymap_key_to_keycode(biton32(layer_state), (keypos_t){ .row = row, .col = col }) == KC_NO);
            if (current_state != key_status.key_states[col][row]) {
                update_key_status(col, row, current_state);
            }
        }
    }

    if (timer_elapsed(last_timer) > 30) {
        last_timer = timer_read();
        time_bar_width += timer_growing ? 1 : -1;
        if (time_bar_width > 31 || time_bar_width < 1) {
            timer_growing = !timer_growing;
        }
    }

    static uint32_t last_reset = 0;
    if (timer_elapsed32(last_reset) > 10000) {
        oled_render();
        last_reset = timer_read32();
    }
}
