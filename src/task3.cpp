#include "task2.h"
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long i = 2;
	unsigned long long sum = 0;
	while (i < hbound)
	{
		sum = sum + i;
		i = nextPrime(i);
	}
	return sum;
}