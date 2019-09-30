#include "task2.h"

bool checkPrime(unsigned int value)
{
	bool fl = 1;
	if (value < 2)
		fl = 0;
	for (unsigned int i = 2; i*i< value; i++)
	{
		if (value % i == 0) 
			fl = 0;
	}
	return(fl);
}

unsigned long long nPrime(unsigned n)
{
	long int value = 2;
	int k = 1;
	while (k != n)
	{
		value++;
		if (checkPrime(value)) 
			k++;
	}
	return (value);
}

unsigned long long nextPrime(unsigned long long value)
{
	bool fl = 1;
	long long val = value;
	while (fl)
	{
		val++;
		if (checkPrime(val))
			fl = 0;
	}
	return(val);
}
