//
// Created by daria on 01.10.2019.
//

#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
    unsigned long long summ = 0;
    bool* tmp = new bool[hbound];
    for (int i = 0; i < hbound; i++){
        tmp[i] = true;
    }
    for (int i = 2; i * i <= hbound; i++){
        if (tmp[i])
            for (int j = i * i; j <= hbound; j += i){
                tmp[j] = false;
            }
    }
    for (int i = 2; i < hbound; i++){
        if (tmp[i]) summ += i;
    }
    return summ;
}

