//
// Created by aklen on 25.09.2019.
//
#include <iostream>
#include "math.h"
#include "task2.h"
using namespace std;

bool checkPrime(unsigned int value){
    if(value==2)
        return true;
    if((value%2==0)|| (value<2)){
        return false;
    }
    for(int i=3;i<=sqrt(value);i+=2){
        if(value%i==0)
            return false;
    }
    return true;
}

unsigned long long nPrime(unsigned n){
    unsigned current=0;
    unsigned long long i=1;
    while (current<n){
        i++;
        if(checkPrime(i)){
            current++;
        }
    }
    return i;
}

unsigned long long nextPrime(unsigned long long value){
    unsigned long long current=value+1;
    int exit=0;
    unsigned long long int i=2;
    unsigned long long next=0;
    while (exit==0){
        if((current%i==0) &&(i!=current)){
            i=2;
            current++;
            continue;
        }
        if((current==i)||(i>sqrt(current))){
            next=current;
            exit=1;
        }
        i++;
    }
    return next;
}

