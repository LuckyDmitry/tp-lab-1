#include "task2.h"

unsigned long checkPrime(unsigned int value)
{
	bool flag = true;
	for (int i = 2; i < value; i++)
	{
		if ((value % i == 0) && (value != 2))
		{
			flag = false;
			break;
		}
	}
	return flag;
}

unsigned long long nPrime(unsigned n)
{
	int counter = 0;
	int number = 1;
	while (counter != n)
	{
		number++;
		if (checkPrime(number))
		{
			counter++;
		}
	}
	return number;
}

unsigned long long nextPrime(unsigned long long value)
{
	int result = value + 1;
	while (!checkPrime(result))
	{
		result++;
	}
	return result;
}