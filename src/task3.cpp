#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 2, 
		num = 2;
	while (num < hbound)
	{
		num = nextPrime(num);
		sum = sum + num;
	}
	return sum - num;
}
