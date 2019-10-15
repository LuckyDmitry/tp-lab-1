#include "task2.h"

bool checkPrime(unsigned int value) {
    if (value <= 1) return false;
    for (unsigned int i = 2; i < value; i++) {
        if (value % i == 0) return false;
    }
    return true;
}

unsigned long long nPrime(unsigned int n){
    unsigned int counter = 0;
    unsigned long long number = 1;
    while(counter != n){
        if(checkPrime(++number)) ++counter;
    }
    return number;
}

unsigned long long nextPrime(unsigned long long value){
    while(!checkPrime(++value));
    return value;
}