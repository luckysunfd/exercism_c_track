#include "darts.h"
#include <math.h>


int score(coordinate_t landing) {
    float radius = sqrt(landing.x * landing.x + landing.y * landing.y);

    if( radius <= 1 ) {
        return 10;
    } else if( radius > 1 && radius <= 5 ) {
        return 5;
    } else if( radius > 5 && radius <= 10 ) {
        return 1;
    }

    return 0;
}
