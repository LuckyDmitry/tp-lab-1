
#include "task3.h"
#include "math.h"

unsigned long long sumPrime(unsigned int hbound)
{
	long long s = 0;

	for (int i = 2; i < hbound; i++)
		if ( checkPrime(i) )
			s = s + i;

	return s;
}

bool checkPrime(unsigned int value)
{
	for (int i = 2; i <= ceil(sqrt(value)); i++)
		if (value % i == 0)
			return false;

	return true;
}

