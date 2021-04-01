#include "armstrong_numbers.h"
#include <math.h>
#include <stdio.h>

bool is_armstrong_number(int candidate) {
    int orig = candidate; // first store original num
    int get_current_digit = 0; // get current digit of num
    int sum = 0;  // store each digit pow 
    
    char buffer[50] = { '\0', };
    // a simple way to count the number of digits in the number
    int digit_count = sprintf(buffer, "%u", candidate);

    while( candidate > 0 ) {
        get_current_digit = candidate % 10;
        candidate /= 10;
        sum += pow(get_current_digit, digit_count);
    }

    if( sum == orig )
        return true;
    else
        return false;
}
