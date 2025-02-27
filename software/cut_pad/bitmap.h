#pragma once
#include <avr/pgmspace.h>

// vertikal - 1bit per pixel gespeichert
const char bitmap_Base_image [] PROGMEM = {
    0xfe, 0xff, 0x03, 0x03, 0x03, 0x87, 0x86, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x0c, 
    0x0c, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1c, 0x38, 0xf0, 0xe0, 
    0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0xf9, 0xf8, 0x98, 
    0x98, 0x9b, 0xfb, 0xf0, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x01, 
    0x01, 0x01, 0x01, 0x00, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 
    0xf8, 0x80, 0x80, 0x80, 0x00, 0xf0, 0x28, 0x28, 0xf0, 0x00, 0x18, 0x20, 0xe0, 0x20, 0x18, 0x00, 
    0xf8, 0xa8, 0xa8, 0x88, 0x00, 0xf8, 0x28, 0x68, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xc0, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x40, 0x00, 0x40, 0xc0, 0x40, 
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x40, 0x40, 0x00, 0xc0, 0x00, 0xc0, 0x00, 
    0x07, 0x04, 0x04, 0x00, 0x07, 0x01, 0x01, 0x07, 0x00, 0x04, 0x05, 0x05, 0x02, 0x00, 0x07, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x07, 0x01, 0x06, 0x00, 0x07, 0x05, 0x05, 0x00, 0x01, 0x07, 0x01, 0x00, 
    0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 
    0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 
    0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 0x00, 0x55, 0x00, 0x00, 
    0x00, 0x55, 0x00, 0x00, 0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 
    0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0x15, 0x00, 0x10, 
    0x00, 0x15, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 
    0xff, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xff, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0xff, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xff, 0x00, 
    0xff, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xff, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0xff, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xff, 0x00, 
    0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 
    0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x00
};

const char bitmap_1_image [] PROGMEM = {
    0xfe, 0xff, 0x03, 0x03, 0x03, 0x87, 0x86, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x0c, 
    0x0c, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1c, 0x38, 0xf0, 0xe0, 
    0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0xf9, 0xf8, 0x98, 
    0x98, 0x9b, 0xfb, 0xf0, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x01, 
    0x01, 0x01, 0x01, 0x00, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 
    0xf8, 0x80, 0x80, 0x80, 0x00, 0xf0, 0x28, 0x28, 0xf0, 0x00, 0x18, 0x20, 0xe0, 0x20, 0x18, 0x00, 
    0xf8, 0xa8, 0xa8, 0x88, 0x00, 0xf8, 0x28, 0x68, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x70, 0x38, 
    0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 
    0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
    0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xc0, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x40, 0x00, 0x40, 0xc0, 0x40, 
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x40, 0x40, 0x00, 0xc0, 0x00, 0xc0, 0x00, 
    0x07, 0x04, 0x04, 0x00, 0x07, 0x01, 0x01, 0x07, 0x00, 0x04, 0x05, 0x05, 0x02, 0x00, 0x07, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x07, 0x01, 0x06, 0x00, 0x07, 0x05, 0x05, 0x00, 0x01, 0x07, 0x01, 0x00, 
    0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 
    0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 
    0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 0x00, 0x55, 0x00, 0x00, 
    0x00, 0x55, 0x00, 0x00, 0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 
    0xfe, 0x02, 0x42, 0xa2, 0x12, 0xb2, 0x52, 0xb2, 0xf2, 0x02, 0xfe, 0x00, 0x00, 0x15, 0x00, 0x10, 
    0x00, 0x15, 0x00, 0x00, 0xfe, 0x02, 0x02, 0xb2, 0xb2, 0x02, 0xb2, 0xb2, 0x02, 0x02, 0xfe, 0x00, 
    0xff, 0x08, 0x08, 0x88, 0x49, 0x49, 0x49, 0x89, 0x09, 0x08, 0xff, 0x08, 0x08, 0xc8, 0x48, 0x48, 
    0x48, 0x88, 0x08, 0x08, 0xff, 0x08, 0x08, 0x89, 0x49, 0x48, 0x49, 0x89, 0x08, 0x08, 0xff, 0x00, 
    0xff, 0x20, 0x20, 0x27, 0x21, 0x21, 0x21, 0x27, 0x20, 0x20, 0xff, 0x20, 0x20, 0x27, 0x25, 0x25, 
    0x25, 0x22, 0x20, 0x20, 0xff, 0x20, 0x20, 0x23, 0x24, 0x24, 0x24, 0x22, 0x20, 0x20, 0xff, 0x00, 
    0xff, 0x80, 0x80, 0x91, 0x8a, 0x84, 0x8a, 0x91, 0x80, 0x80, 0xff, 0x80, 0x80, 0x83, 0x84, 0x98, 
    0x84, 0x83, 0x80, 0x80, 0xff, 0x80, 0x80, 0x91, 0x99, 0x95, 0x93, 0x91, 0x80, 0x80, 0xff, 0x00
};

const char bitmap_MEDIA_image [] PROGMEM = {
    0xfe, 0xff, 0x03, 0x03, 0x03, 0x87, 0x86, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x0c, 
    0x0c, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1c, 0x38, 0xf0, 0xe0, 
    0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0xf9, 0xf8, 0x98, 
    0x98, 0x9b, 0xfb, 0xf0, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x01, 
    0x01, 0x01, 0x01, 0x00, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 
    0xf8, 0x80, 0x80, 0x80, 0x00, 0xf0, 0x28, 0x28, 0xf0, 0x00, 0x18, 0x20, 0xe0, 0x20, 0x18, 0x00, 
    0xf8, 0xa8, 0xa8, 0x88, 0x00, 0xf8, 0x28, 0x68, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x03, 0x03, 0x07, 0x06, 0x0e, 0x0c, 0x1c, 0x18, 
    0xb8, 0xb0, 0xf0, 0xe0, 0xe0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x3f, 0x38, 0x18, 0x1c, 0x0c, 0x0e, 0x06, 0x07, 0x03, 
    0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xc0, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x40, 0x00, 0x40, 0xc0, 0x40, 
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x40, 0x40, 0x00, 0xc0, 0x00, 0xc0, 0x00, 
    0x07, 0x04, 0x04, 0x00, 0x07, 0x01, 0x01, 0x07, 0x00, 0x04, 0x05, 0x05, 0x02, 0x00, 0x07, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x07, 0x01, 0x06, 0x00, 0x07, 0x05, 0x05, 0x00, 0x01, 0x07, 0x01, 0x00, 
    0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 
    0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 
    0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 0x00, 0x55, 0x00, 0x00, 
    0x00, 0x55, 0x00, 0x00, 0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 
    0xfe, 0x02, 0xf2, 0x42, 0xe2, 0xf2, 0x42, 0xe2, 0xf2, 0x02, 0xfe, 0x00, 0x00, 0x15, 0x00, 0x10, 
    0x00, 0x15, 0x00, 0x00, 0xfe, 0x02, 0xf2, 0xe2, 0x42, 0xf2, 0xe2, 0x42, 0xf2, 0x02, 0xfe, 0x00, 
    0xff, 0x08, 0x09, 0x08, 0x08, 0x09, 0x08, 0x08, 0x09, 0x08, 0xff, 0x08, 0x88, 0x48, 0xe8, 0x08, 
    0x08, 0x88, 0x08, 0x08, 0xff, 0x08, 0x89, 0x48, 0xe8, 0x09, 0x88, 0x08, 0x89, 0x08, 0xff, 0x00, 
    0xff, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xff, 0x20, 0x23, 0x24, 0xaf, 0x20, 
    0x21, 0x23, 0x21, 0x20, 0xff, 0x20, 0x23, 0x24, 0x2f, 0x20, 0x22, 0x21, 0x22, 0x20, 0xff, 0x00, 
    0xff, 0x80, 0x80, 0x80, 0x9e, 0x80, 0x9e, 0x80, 0x80, 0x80, 0xff, 0x80, 0x8e, 0x91, 0xbf, 0x80, 
    0x84, 0x84, 0x84, 0x80, 0xff, 0x80, 0x80, 0x80, 0x9f, 0x8e, 0x84, 0x80, 0x80, 0x80, 0xff, 0x00
};

const char bitmap_WINDOWS_image [] PROGMEM = {
    0xfe, 0xff, 0x03, 0x03, 0x03, 0x87, 0x86, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x0c, 
    0x0c, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1c, 0x38, 0xf0, 0xe0, 
    0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0xf9, 0xf8, 0x98, 
    0x98, 0x9b, 0xfb, 0xf0, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x01, 
    0x01, 0x01, 0x01, 0x00, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 
    0xf8, 0x80, 0x80, 0x80, 0x00, 0xf0, 0x28, 0x28, 0xf0, 0x00, 0x18, 0x20, 0xe0, 0x20, 0x18, 0x00, 
    0xf8, 0xa8, 0xa8, 0x88, 0x00, 0xf8, 0x28, 0x68, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0x60, 0x60, 0x60, 0x60, 0x60, 0xe0, 0xe0, 0x00, 
    0xf0, 0xf0, 0x30, 0x30, 0x30, 0x30, 0x38, 0x18, 0x18, 0x18, 0x18, 0xf8, 0xf8, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x7f, 0x7f, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7f, 0x7f, 0x00, 
    0x7f, 0x7f, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7f, 0x7f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xff, 0xff, 0x83, 0x83, 0x83, 0x83, 0x03, 0x03, 0x03, 0x03, 0x03, 0xff, 0xff, 0x00, 
    0xff, 0xff, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 
    0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x0e, 0x0c, 0x0c, 0x0c, 0x0c, 0x0f, 0x0f, 0x00, 0x00, 0x00, 
    0xc0, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x40, 0x00, 0x40, 0xc0, 0x40, 
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x40, 0x40, 0x00, 0xc0, 0x00, 0xc0, 0x00, 
    0x07, 0x04, 0x04, 0x00, 0x07, 0x01, 0x01, 0x07, 0x00, 0x04, 0x05, 0x05, 0x02, 0x00, 0x07, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x07, 0x01, 0x06, 0x00, 0x07, 0x05, 0x05, 0x00, 0x01, 0x07, 0x01, 0x00, 
    0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 
    0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 
    0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 0x00, 0x55, 0x00, 0x00, 
    0x00, 0x55, 0x00, 0x00, 0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 
    0xfe, 0x02, 0xfa, 0x0a, 0xea, 0x2a, 0x2a, 0x22, 0xe2, 0x02, 0xfe, 0x00, 0x00, 0x15, 0x00, 0x10, 
    0x00, 0x15, 0x00, 0x00, 0xfe, 0x02, 0xfa, 0x0a, 0xea, 0xea, 0xea, 0xe2, 0xe2, 0x02, 0xfe, 0x00, 
    0xff, 0x08, 0xa8, 0x08, 0xab, 0x8a, 0xaa, 0x8a, 0x8b, 0x08, 0xff, 0x08, 0xc8, 0x48, 0x48, 0x88, 
    0x88, 0x88, 0x88, 0x08, 0xff, 0x08, 0x48, 0xe8, 0x4b, 0x0b, 0x4b, 0x4b, 0x4b, 0x08, 0xff, 0x00, 
    0xff, 0x20, 0x22, 0x20, 0xaf, 0xa8, 0x28, 0x28, 0x2f, 0x20, 0xff, 0x20, 0xaf, 0xa8, 0xa8, 0xa8, 
    0xa8, 0xa8, 0xaf, 0x20, 0xff, 0x20, 0x2a, 0x24, 0x2a, 0x20, 0x2a, 0x2a, 0x2a, 0x20, 0xff, 0x00, 
    0xff, 0x80, 0x8c, 0x8c, 0x87, 0xb0, 0xb1, 0x9f, 0x80, 0x80, 0xff, 0x80, 0xa4, 0xae, 0xa4, 0xa0, 
    0xa0, 0xa2, 0xa8, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x00
};

const char bitmap_RL_image [] PROGMEM = {
    0xfe, 0xff, 0x03, 0x03, 0x03, 0x87, 0x86, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x0c, 
    0x0c, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1c, 0x38, 0xf0, 0xe0, 
    0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0xf9, 0xf8, 0x98, 
    0x98, 0x9b, 0xfb, 0xf0, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x01, 
    0x01, 0x01, 0x01, 0x00, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 
    0xf8, 0x80, 0x80, 0x80, 0x00, 0xf0, 0x28, 0x28, 0xf0, 0x00, 0x18, 0x20, 0xe0, 0x20, 0x18, 0x00, 
    0xf8, 0xa8, 0xa8, 0x88, 0x00, 0xf8, 0x28, 0x68, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0xf8, 0xf8, 0xf8, 0xf0, 0xe0, 0x00, 0x30, 0x30, 0x30, 0x30, 
    0x30, 0x30, 0x30, 0x30, 0x70, 0x60, 0x60, 0x60, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x7c, 0xf9, 0xc3, 0x03, 0x03, 0x01, 0x00, 0x10, 0x2c, 0x12, 0x12, 0x24, 
    0x44, 0x04, 0x88, 0x10, 0x60, 0x00, 0x00, 0xc0, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x1e, 0x3c, 0x72, 0xe2, 0xc2, 0x84, 0x84, 0x08, 0x08, 
    0x90, 0xa1, 0xc2, 0xe1, 0x70, 0x3c, 0x1e, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x03, 
    0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xc0, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x40, 0x00, 0x40, 0xc0, 0x40, 
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x40, 0x40, 0x00, 0xc0, 0x00, 0xc0, 0x00, 
    0x07, 0x04, 0x04, 0x00, 0x07, 0x01, 0x01, 0x07, 0x00, 0x04, 0x05, 0x05, 0x02, 0x00, 0x07, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x07, 0x01, 0x06, 0x00, 0x07, 0x05, 0x05, 0x00, 0x01, 0x07, 0x01, 0x00, 
    0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 
    0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 
    0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 0x00, 0x55, 0x00, 0x00, 
    0x00, 0x55, 0x00, 0x00, 0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 
    0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0x15, 0x00, 0x10, 
    0x00, 0x15, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 
    0xff, 0x08, 0xe8, 0x08, 0x08, 0x08, 0x08, 0x08, 0xe8, 0x08, 0xff, 0x08, 0x08, 0xc8, 0x28, 0x28, 
    0x28, 0x48, 0x08, 0x08, 0xff, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xff, 0x00, 
    0xff, 0x20, 0x21, 0x26, 0x28, 0x26, 0x28, 0x26, 0x21, 0x20, 0xff, 0x20, 0x20, 0x27, 0x28, 0x29, 
    0x29, 0x27, 0x20, 0x20, 0xff, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xff, 0x00, 
    0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 
    0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x00
};

const char bitmap_DC_image [] PROGMEM = {
    0xfe, 0xff, 0x03, 0x03, 0x03, 0x87, 0x86, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x0c, 
    0x0c, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1c, 0x38, 0xf0, 0xe0, 
    0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0xf9, 0xf8, 0x98, 
    0x98, 0x9b, 0xfb, 0xf0, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x01, 
    0x01, 0x01, 0x01, 0x00, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 
    0xf8, 0x80, 0x80, 0x80, 0x00, 0xf0, 0x28, 0x28, 0xf0, 0x00, 0x18, 0x20, 0xe0, 0x20, 0x18, 0x00, 
    0xf8, 0xa8, 0xa8, 0x88, 0x00, 0xf8, 0x28, 0x68, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x60, 0x60, 0x60, 0x60, 0x60, 0xe0, 0xc0, 0xc0, 0xc0, 
    0xc0, 0xc0, 0xe0, 0x60, 0x60, 0x60, 0x60, 0x60, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x80, 0xf8, 0xff, 0x0f, 0x01, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x01, 0x0f, 0xff, 0xf8, 0x80, 0x00, 0x00, 
    0x00, 0x3f, 0x7f, 0xe0, 0xc0, 0xc0, 0x80, 0xc0, 0xe0, 0xe1, 0x61, 0x60, 0xe0, 0xc0, 0xc0, 0xc0, 
    0xc0, 0xc0, 0xe0, 0x60, 0x61, 0xe1, 0xe0, 0xc0, 0x80, 0xc0, 0xc0, 0xe0, 0x7f, 0x3f, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xc0, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x40, 0x00, 0x40, 0xc0, 0x40, 
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x40, 0x40, 0x00, 0xc0, 0x00, 0xc0, 0x00, 
    0x07, 0x04, 0x04, 0x00, 0x07, 0x01, 0x01, 0x07, 0x00, 0x04, 0x05, 0x05, 0x02, 0x00, 0x07, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x07, 0x01, 0x06, 0x00, 0x07, 0x05, 0x05, 0x00, 0x01, 0x07, 0x01, 0x00, 
    0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 
    0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 
    0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 0x00, 0x55, 0x00, 0x00, 
    0x00, 0x55, 0x00, 0x00, 0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 
    0xfe, 0x02, 0x02, 0x42, 0x82, 0x3a, 0x82, 0x42, 0x02, 0x02, 0xfe, 0x00, 0x00, 0x15, 0x00, 0x10, 
    0x00, 0x15, 0x00, 0x00, 0xfe, 0x02, 0xe2, 0x12, 0x52, 0x12, 0x52, 0x12, 0xe2, 0x02, 0xfe, 0x00, 
    0xff, 0x08, 0x08, 0x0a, 0x0a, 0x09, 0x0a, 0x0a, 0x08, 0x08, 0xff, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0xff, 0x08, 0x0b, 0x0a, 0x09, 0x09, 0x09, 0x0a, 0x0b, 0x08, 0xff, 0x00, 
    0xff, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xff, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0xff, 0x20, 0xa0, 0x20, 0xa0, 0xa0, 0xa0, 0x20, 0x20, 0x20, 0xff, 0x00, 
    0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 
    0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x8b, 0x93, 0xa2, 0xa0, 0xa0, 0x91, 0x8e, 0x80, 0xff, 0x00
};

const char bitmap_INTERNET_image [] PROGMEM = {
    0xfe, 0xff, 0x03, 0x03, 0x03, 0x87, 0x86, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x0c, 
    0x0c, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1c, 0x38, 0xf0, 0xe0, 
    0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0xf9, 0xf8, 0x98, 
    0x98, 0x9b, 0xfb, 0xf0, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x01, 
    0x01, 0x01, 0x01, 0x00, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 0x00, 0x0f, 0x1f, 0x19, 0x1f, 0x1f, 
    0xf8, 0x80, 0x80, 0x80, 0x00, 0xf0, 0x28, 0x28, 0xf0, 0x00, 0x18, 0x20, 0xe0, 0x20, 0x18, 0x00, 
    0xf8, 0xa8, 0xa8, 0x88, 0x00, 0xf8, 0x28, 0x68, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x70, 0x38, 0x18, 0xd8, 0x3c, 0x0c, 0x0c, 0xfc, 
    0x0c, 0x0c, 0x3c, 0xdc, 0x18, 0x38, 0x70, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf8, 0xff, 0x4f, 0x41, 0x41, 0x41, 0xf9, 0x47, 0x41, 0x41, 0x41, 0x41, 0xff, 
    0x41, 0x41, 0x41, 0x41, 0x47, 0xf9, 0x41, 0x41, 0x41, 0x4f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x03, 0x1f, 0x3e, 0x70, 0xf0, 0xd0, 0x93, 0x1c, 0x70, 0x90, 0x10, 0x10, 0xff, 
    0x10, 0x10, 0x90, 0x70, 0x1c, 0x93, 0xd0, 0xf0, 0x70, 0x3e, 0x1f, 0x03, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x07, 0x06, 0x06, 0x07, 
    0x06, 0x06, 0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xc0, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x40, 0x00, 0x40, 0xc0, 0x40, 
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x40, 0x40, 0x00, 0xc0, 0x00, 0xc0, 0x00, 
    0x07, 0x04, 0x04, 0x00, 0x07, 0x01, 0x01, 0x07, 0x00, 0x04, 0x05, 0x05, 0x02, 0x00, 0x07, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x07, 0x01, 0x06, 0x00, 0x07, 0x05, 0x05, 0x00, 0x01, 0x07, 0x01, 0x00, 
    0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 
    0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 
    0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 0x00, 0x55, 0x00, 0x00, 
    0x00, 0x55, 0x00, 0x00, 0x1f, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x1f, 0x00, 
    0xfe, 0x02, 0x12, 0xf2, 0x12, 0xda, 0x12, 0xf2, 0x12, 0x02, 0xfe, 0x00, 0x00, 0x15, 0x00, 0x10, 
    0x00, 0x15, 0x00, 0x00, 0xfe, 0x02, 0xe2, 0x52, 0xea, 0x5a, 0xea, 0x52, 0xe2, 0x02, 0xfe, 0x00, 
    0xff, 0x08, 0x08, 0x89, 0x4a, 0x2a, 0x0a, 0x09, 0x08, 0x08, 0xff, 0x08, 0x08, 0x08, 0x08, 0x88, 
    0x08, 0x08, 0x08, 0x08, 0xff, 0x08, 0x08, 0x09, 0x0a, 0x2b, 0x4a, 0x89, 0x08, 0x08, 0xff, 0x00, 
    0xff, 0x20, 0x21, 0x23, 0x25, 0xa9, 0x21, 0x21, 0x21, 0x20, 0xff, 0x20, 0x24, 0x22, 0x21, 0x20, 
    0x21, 0x22, 0x24, 0x20, 0xff, 0x20, 0x21, 0x21, 0x21, 0xa9, 0x25, 0x23, 0x21, 0x20, 0xff, 0x00, 
    0xff, 0x80, 0x84, 0x8a, 0x91, 0xa0, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x84, 0x88, 0x90, 0xa0, 
    0x90, 0x88, 0x84, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x91, 0x8a, 0x84, 0x80, 0xff, 0x00
};
