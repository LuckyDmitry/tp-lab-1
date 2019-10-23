#include "task2.h"

bool checkPrime(unsigned int value) {
    int check = 0;
    for (int i = 2; i*i <= value; i++) {
        if (value % i == 0) {
            check = 1;
            break;
        }
    }
    if (check == 1){
        return false;
    } else {
        return true;
    }
}

unsigned long long nPrime(unsigned int n) {
    unsigned int countp = 1;
    unsigned int num = 2;
    while (countp < n) {
        num++;
        if (checkPrime(num)) {
            countp++;
        }
    }
    return num;
}

unsigned long long nextPrime(unsigned long long value) {
    unsigned long long num = value;
    while (true) {
        num++;
        if (checkPrime(num)) {
            break;
        }
    }
    return num;
}
