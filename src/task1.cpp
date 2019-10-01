#include "task1.h"

unsigned long findValue(unsigned int min,unsigned int max) {
    unsigned long result = 0;
    int check = 1;
    while (true) {
        result++;
        check = 1;
        for (int i = min; i <= max; i++) {
            if (result % i != 0) {
                check = 0;
                break;
            }
        }
        if (check == 1) {
            break;
        }
    }
    return result;
}
