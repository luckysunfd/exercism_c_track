#include <math.h>
#include "./resistor_color_trio.h"

resistor_value_t color_code(resistor_band_t *colors) {
    int val = (10 * colors[0] + colors[1] * pow(10, colors[2]));

    unit_t unit = OHMS;

    if( val % 1000 == 0 ) {
        val /= 1000;
        unit = KILOOHMS;
    }

    struct resistor_value_t result;
    result.value = val;
    result.unit = unit;

    return result;
}
