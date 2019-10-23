#include "task2.h"

bool checkPrime(unsigned int value)
{
	for (long long i = 2; i <= sqrt(value); i++)

		if (value%i == 0)
			return false;
	return true;
}

unsigned long long nPrime(unsigned n)
{
	int primeCnt = 0;
	int i = 2;
	while (primeCnt < n)
	{
		if(checkPrime(i))
			primeCnt++;
		i++;
	}
	return i-1;
}

unsigned long long nextPrime(unsigned long long value)
{
	int dividers = 0;
	value++;
	while (!checkPrime(value))
	{
		value++;
	}
	return value;
}