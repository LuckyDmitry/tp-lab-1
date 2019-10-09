//
//  task2.cpp
//  task2
//
//  Created by Андрей Журавлев on 11/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include "task2.h"
#include <cmath>

bool checkPrime(unsigned int value) {
    if (value % 2 == 0 || value == 1)
        return false;
    for (int i = 3; i <= sqrt(value); i += 2) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

unsigned long long nPrime(unsigned n) {
    if (n == 1)
        return 2;
    if (n == 2)
        return 3;
    int i = 2;
    unsigned long long num = 1;
    while (i != n) {
        if (checkPrime(num))
            i++;
        num += 2;
    }
    return num;
}

unsigned long long nextPrime(unsigned long long value) {
    if (value == 1)
        return 2;
    if (value == 2)     //Чтобы не было проблем с четными числами
        return 3;
    unsigned long long num = value + 2;
    while (!checkPrime(num))
        num += 2;
    return num;
}
