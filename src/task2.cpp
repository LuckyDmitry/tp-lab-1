#include "task2.h"

bool checkPrime(unsigned int value)
{
	for (int i = 2; i * i <= value; i++)
	{
		if ((value % i) == 0)
		{
			return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n)
{
	unsigned long long i = 1, count = 0;
	while (count != n)
	{
		i++;
		if (checkPrime(i))
		{
			count++;
		}
	}
	return i;
}

unsigned long long nextPrime(unsigned long long value)
{
	for (unsigned long long i = value + 1;; i++)
	{
		if (checkPrime(i))
		{
			return i;
		}
	}
}

