#include <iostream>
#include "task3.h"
#include "task2.h"
using namespace std;

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	for (int i = 2; i < hbound; i++)
	{
		if (checkPrime(i))
			sum = sum + i;
	}
	return sum;
}