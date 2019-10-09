//
// Created by aklen on 25.09.2019.
//
#include <iostream>
#include "task2.h"
using namespace std;

int main(){
    int k;
    unsigned int value;
    unsigned n;
    cout<<"Write the number for check if it is simple\n";
    cin>>value;
    k=checkPrime(value);
    if(k)
        cout<<"Simple\n";
    else
        cout<<"Not Simple\n";
    cout<<"Write n to find the n-th number in a row\n";
    cin>>n;
    cout<<"The n number is "<<nPrime(n)<<"\n";
    cout<<"Next simple after "<<value<<" is "<<nextPrime(value);
    return 0;
}
