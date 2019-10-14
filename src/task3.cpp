#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"


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



unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	for (int i = 1; i < hbound; i++) {
		if (checkPrime(i)) {
			sum = sum + i;
		}
	}
	return sum;
}



