#include "task2.h"
#include <math.h>
bool checkPrime(unsigned int value)
{
	if (value == 2)
		return true;
	if (value < 2 || value %2 == 0)
		return false;

	for (unsigned int i = 3; i <=sqrt(value); i+=2)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}
unsigned long long nPrime(unsigned n)
{
	if (n == 1)
		return 2;
	n--;
	for (int i = 3;; i += 2)
	{
		if (checkPrime(i))
			if (n == 1)
				return i;
			else
				n--;
	}
}
unsigned long long nextPrime(unsigned long long value)
{
	if (value % 2 == 0)
		value++;
	else
		value += 2;

	for (int i = value;; i += 2)
	{
		if (checkPrime(i))
			return i;
	}
}
