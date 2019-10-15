#include <iostream>
#include <algorithm>
#include "task1.h"

unsigned long findValue(unsigned int min,unsigned int max) {
    unsigned long number = 1;
    for (unsigned long i = min; i <= max; i++) {
        number = number / std::__gcd(number, i) * i;
    }
    return number;
}