#include <Arduino.h>


const unsigned char up [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x03,
  0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0xff,
  0xf8, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xff,
  0x00, 0x01, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xe0,
  0x0f, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x7f,
  0xff, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f,
  0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff,
  0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8,
  0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00,
  0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00,
  0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f,
  0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char down [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00,
  0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f,
  0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff,
  0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8,
  0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00,
  0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00,
  0x3f, 0xff, 0xf8, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff,
  0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff,
  0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xfc,
  0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00,
  0x00, 0x07, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00,
  0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char zero [] PROGMEM = {
  0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00,
  0x7f, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xff, 0xff, 0x00, 0x03, 0xff, 0xff, 0xff, 0x80, 0x07, 0xff,
  0x83, 0xff, 0xc0, 0x0f, 0xfc, 0x00, 0x7f, 0xe0, 0x0f, 0xf0, 0x00, 0x1f, 0xf0, 0x1f, 0xe0, 0x00,
  0x0f, 0xf0, 0x1f, 0xc6, 0x00, 0x47, 0xf8, 0x3f, 0x8f, 0x01, 0xe3, 0xf8, 0x7f, 0x1f, 0x81, 0xf1,
  0xfc, 0x7f, 0x3f, 0xc7, 0xf8, 0xfc, 0x7f, 0x3f, 0xef, 0xfc, 0xfe, 0x7e, 0x3f, 0xff, 0xf8, 0xfe,
  0xfe, 0x1f, 0xff, 0xf0, 0x7e, 0xfc, 0x0f, 0xff, 0xe0, 0x7e, 0xfc, 0x07, 0xff, 0xc0, 0x7e, 0xfc,
  0x03, 0xff, 0x80, 0x7e, 0xfc, 0x03, 0xff, 0x80, 0x7e, 0xfc, 0x07, 0xff, 0xc0, 0x7e, 0xfc, 0x0f,
  0xff, 0xe0, 0x7e, 0xfe, 0x1f, 0xff, 0xf0, 0x7e, 0x7e, 0x3f, 0xff, 0xf8, 0xfe, 0x7f, 0x3f, 0xef,
  0xfc, 0xfe, 0x7f, 0x3f, 0xc7, 0xf8, 0xfc, 0x7f, 0x1f, 0x83, 0xf1, 0xfc, 0x3f, 0x8f, 0x01, 0xe3,
  0xfc, 0x1f, 0xc6, 0x00, 0x47, 0xf8, 0x1f, 0xe0, 0x00, 0x0f, 0xf0, 0x0f, 0xf0, 0x00, 0x1f, 0xf0,
  0x0f, 0xfc, 0x00, 0x7f, 0xe0, 0x07, 0xff, 0x81, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0x80, 0x01,
  0xff, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x0f,
  0xff, 0xe0, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
};
