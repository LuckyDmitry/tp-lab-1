#include "task2.h"
#include <iostream>


int main()
{
    unsigned int num;
    sid::cin >> num;
    std::cout << checkPrime(num)<<"\n"<<nPrime(num)<<"\n"<<nextPrime(num);
    return 0;
}
