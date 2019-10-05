//
// Created by daria on 01.10.2019.
//

#include "task2.h"
bool checkPrime(unsigned int value){
    bool f = true;
    for (unsigned int i = 2; i < value; i++) {
        if (value % i == 0)f = false;
    }

    return f;
}

unsigned long long nPrime(unsigned n){
    int num=n;
    int val=2;
    while(num>0){
        if(checkPrime(val)==true){
            val++;
            num--;
        }
        else val++;
    }
    return val-1;
}

unsigned long long nextPrime(unsigned long long value){
    int val=value;
    val++;
    while(checkPrime(val)!=true) val++;
    return val;
}