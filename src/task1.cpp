//
// Created by daria on 30.09.2019.
//

#include "task1.h"

unsigned  long Nod(unsigned int a, unsigned int b){
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
        unsigned long nod = Nod(res, i);

        res = res*i/nod;
    }
    return res;
}
