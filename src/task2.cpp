#include "stdafx.h"

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
		return 1;
	else
		return 0;
}

unsigned long long nPrime(unsigned n)
{
	int i = 1;
	long long x = 1;

	while (i != n)
	{
		if (checkPrime(x) == 1)
			i++;
		x++;
	}
	return (x-1);

}

unsigned long long nextPrime(unsigned long long value)
{
	long long x = value + 1;
	int flag = 0;
	while (flag != 1)
	{
		if (checkPrime(x) == 1)
			flag = 1;
		x++;
	}
	return(x - 1);
} 