#include "task2.h"
#include "task3.h"
#include <iostream>

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	unsigned long long prv = 2;

	while (prv < hbound)
	{
		std::cout << prv << "\n";
		sum += prv;
		prv = nextPrime(prv);
	}

	return sum;
}