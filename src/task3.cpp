//
//  task3.cpp
//  task3
//
//  Created by Андрей Журавлев on 12/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include "task3.h"
#include <iostream>
using namespace std;

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long sum = 0, numPrime = 0;
    while (numPrime < hbound) {
        sum += numPrime;
        cout << numPrime << endl;
        numPrime = nextPrime(numPrime);
    }
    return sum;
}
