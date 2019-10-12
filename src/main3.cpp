//
// Created by artem on 30.09.2019.
//
#include "task3.h"
#include <iostream>

int main()
{
    unsigned int start_time = clock();
    unsigned long long res = sumPrime(2000000);
    unsigned long long expected = 142913828922;

    if (res == expected)
        std::cout << "true" << '\n';
    else
        std::cout << "false" << '\n';

    unsigned int end_time = clock();
    unsigned int search_time = end_time - start_time;

    std::cout << search_time;

    return 0;
}

