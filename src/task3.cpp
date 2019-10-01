#include "task2.h"
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	int sum = 0;
	for (unsigned long long i = 2; i < hbound; i++)
	{
		if (checkPrime(i))
		{
			sum += i;
		}
	}
	return sum;
}