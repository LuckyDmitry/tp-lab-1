//
// Created by daria on 01.10.2019.
//

#include "task3.h"
#include "task2.h"
unsigned long long sumPrime(unsigned int hbound){
    unsigned long long sum=0;
    int max=hbound;
    for(int i=2;i<max;i++){
        if(checkPrime(i)==true)sum+=i;
    }
    return sum;
}