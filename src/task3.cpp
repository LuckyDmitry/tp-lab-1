#include "task3.h"

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long result = 0, temp = 1;
    while (nextPrime(temp) < hbound) {
        result += nextPrime(temp);
        temp = nextPrime(temp);
    }
    return result;
}
