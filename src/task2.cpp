//
//  task2.cpp
//  task2
//
//  Created by Андрей Журавлев on 11/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include "task2.h"

bool checkPrime(unsigned int value) {
    for (int i = value - 1; i >= 2; i--) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

unsigned long long nPrime(unsigned n) {
    int i = 0;
    unsigned long long num = 1;
    while (i != n) {
        num++;
        if (checkPrime(num))
            i++;
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
