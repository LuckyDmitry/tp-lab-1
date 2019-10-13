//
//  task2.cpp
//  lab
//
//  Created by Коля on 29/09/2019.
//  Copyright © 2019 Коля. All rights reserved.
//

#include "task2.hpp"

bool checkPrime(unsigned long long value)
{
    if (value < 2)
        return 0;
    for (unsigned long long i = 2; i*i <= value; i++)
        if (value%i==0)
            return 0;
    return 1;
}

unsigned long long nPrime(unsigned n)
{
    unsigned long long value = 0;
    for (unsigned long long i = 2; n!=0; i++)
     {
         if (checkPrime(i))
         {
             n--;
             value = i;
         }
     }
     return value;
}

unsigned long long nextPrime(unsigned long long value)
{
    do
        value++;
    while (!checkPrime(value));
    return value;
}
