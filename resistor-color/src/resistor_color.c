#include "resistor_color.h"

// 用一个 数组 存储 这些颜色，并且将颜色代表的值 与数组的偏移量关联起来
static resistor_band_t bands[] = {
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
};


resistor_band_t color_code(resistor_band_t code) {
    return bands[code];
}

// return all colors of resistor
resistor_band_t* colors(void) {
    return bands;
}

