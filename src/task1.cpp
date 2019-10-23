//
// Created by Mary on 25.09.2019.
//
#include <iostream>
#include "task1.h"
using namespace std;
unsigned  long getNod(unsigned int a, unsigned int b){
    if (b > a){
        int tmp = b;
        b = a;
        a = tmp;
    }
    while (b > 0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
unsigned long findValue(unsigned int min,unsigned int max){
    unsigned long res = min;
    for (int i = max; i > min; i --){
        unsigned long nod = getNod(res, i);

        res = res*i/nod;
    }
    return res;
}