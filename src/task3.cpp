#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	unsigned long long i = 2;
	while(i<hbound)
	{
		if (checkPrime(i))
		{
			sum = sum + i;
		}
		i++;
	}
	return sum;
}