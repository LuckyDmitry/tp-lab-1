//
// Created by Илья Соловьёв on 25/09/2019.
//
#include "task1.h"
#include <iostream>

using namespace std;

unsigned long NOD(unsigned int a, unsigned int b) {
    while (a && b) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    return a + b;

}

unsigned long NOK(unsigned long a, unsigned long b) {
    int nod = NOD(a, b);
    return a * b / nod;

}

unsigned long findValue(unsigned int min, unsigned int max) {
    unsigned long result = min;
    unsigned int second = 0;
    for (unsigned int i = min + 1; i <= max; i++) {
        second = i;
        result = NOK(result, second);
    }
    return result;
};