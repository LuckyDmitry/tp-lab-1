#include "task3.h"
#include "task2.h"
unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 2;
	for (int i = 3; i < hbound; i += 2)
	{
		if (checkPrime(i))
			sum += i;		
	}
	return sum;
}