#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"

bool checkPrime(unsigned int value)
{
	int i;
	if (value < 2)
		return false;
	for (int i = 2; i*i <= value; i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}


unsigned long long nPrime(unsigned n)
{
	int value = 2;
	int i = 1;
	while (i <= n)
	{
		if (checkPrime(value) == true)
			i++;
		value++;
	}
	return (value-1);
}

unsigned long long nextPrime(unsigned long long value) {
	while (1) {
		value += 1;
		if (checkPrime(value)) {
			return value;
		}
	}
}



