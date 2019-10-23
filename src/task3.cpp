#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long int sum = 0;
	unsigned long long int counter = 1;
	while (counter < hbound)
	{
		counter++;
		if (checkPrime(counter))
		{
			sum = sum + counter;
		}
	}
	return sum;
}