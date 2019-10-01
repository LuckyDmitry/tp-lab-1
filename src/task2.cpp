#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"

bool checkPrime(unsigned int value)
{
	
	if (value == 1)
		return false;
	unsigned int i = 2;
	while (i < value)
	{
		if (value % i != 0)
			i++;
		else return false;
	}
	return true;
}

unsigned long long nPrime(unsigned n)
{
	unsigned long long i = 1;
	while (n > 0)
	{
		if (checkPrime(i))
			n--;
		i++;	 
	}
	return i-1;
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
