//
// Created by Mary on 24.09.2019.
//
#include "task3.h"
#include "task2.h"
#include <iostream>
using namespace std;
unsigned long long sumPrime(unsigned int hbound){
    unsigned long long sum = 0;
    unsigned long int i = 2;
    while (i < hbound){
        sum += i;
        i = nextPrime(i);
    }
    return sum;
}
