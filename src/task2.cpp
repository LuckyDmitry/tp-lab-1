#include "task2.h"
#include <math.h>
#include <limits.h>

#include <iostream>

bool checkPrime(unsigned int value)
{
	if (value == 1) return false;
	if (value == 2) return true;
	if (value % 2 == 0) return false;

	for (unsigned int i = 3; i < sqrt(value)+1; i += 2)
	{
		if (value % i == 0) return false;
	}
	return true;
}

unsigned long long nPrime(unsigned n)
{
	if (n == 1) return 2;
	n--;
	unsigned long long tmp = 2;
	for (; n > 0; n--)
	{
		tmp = nextPrime(tmp);
	}
	return tmp;
}
unsigned long long nextPrime(unsigned long long value)
{
	if (value == 2) return 3;
	for (unsigned long long i = value + 2; i < ULLONG_MAX; i += 2)
	{
		if (checkPrime(i)) return i;
	}
	return 0;
}