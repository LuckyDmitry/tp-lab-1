//
// Created by aklen on 25.09.2019.
//
#include <iostream>
#include "task3.h"
using namespace std;

int main(){
    unsigned int value;
    cout<<"Write the number to count the sum of all the simple numbers before it\n";
    cin>>value;
    cout<<sumPrime(value);
    return 0;
}

