#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include "task2.h"


unsigned long long sumPrime(unsigned int hbound)
{
	unsigned int i = 0;
	unsigned long long sum = 0;
	while (i < hbound)
	{
			i = nextPrime(i);
			if (i < hbound)
				sum = sum + i;
	}
	return sum;
}
