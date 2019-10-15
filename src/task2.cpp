#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"

bool checkPrime(unsigned int value)
{
	int k = 1;
	int i = 2;

	while ((k <= 2) && (i <= value))
	{
		if (value % i == 0)
			k++;
		i++;
	}

	if (k == 2)
		return true;
	else
		return false;
}

unsigned long long nPrime(unsigned n)
{
	int i = 1;
	long long x = 1;

	while (i != n)
	{
		if (checkPrime(x) == 1)
		{
			i++;
		}
		x++;
	}
	return x-1;

}

unsigned long long nextPrime(unsigned long long value)
{
	while (1)
	{
		value++;
		if (checkPrime(value))
			return value;
	}
} 
