#include "task2.h"

 
bool checkPrime(unsigned int value)
{
	for (unsigned int i = 2; i <= value-1; i++)
	{
		if (value%i == 0)
		{
			return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n)
{
	int i = 2;
	int c = 0;
	while (c<n)
	{
		if (checkPrime(i))
		{
			c++;
		}
		i++;
	}
	return i - 1;
}
unsigned long long nextPrime(unsigned long long value)
{
	int i = value + 1;
	bool n = false;
	while (n!=true)
	{
		n = checkPrime(i);
		i++;
	}
	return i - 1;
}