#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H

#include <stdint.h>

typedef enum resistor_band_t {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

typedef enum unit_t { OHMS, KILOOHMS } unit_t;

typedef struct resistor_value_t {
    int value;
    unit_t unit;
} resistor_value_t;

resistor_value_t color_code(resistor_band_t *colors);


#endif
