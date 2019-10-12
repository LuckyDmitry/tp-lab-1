
// Created by artem on 30.09.2019.
//
#include "task2.h"

bool checkPrime(unsigned int value)
{
    if (value <= 1)
        return false;

    for (int i = 2; i < value; i++)
        if (value % i == 0)
            return false;

    return true;
}

unsigned long long nPrime(unsigned n)
{
    int num = 2, count = 0;

    while(count != n)
    {
        if (checkPrime(num))
            count++;
        num++;
    }

    return --num;
}

unsigned long long nextPrime(unsigned long long value)
{
    unsigned long long next = value + 1;
    while (!checkPrime(next))
        next++;
    return next;
}
