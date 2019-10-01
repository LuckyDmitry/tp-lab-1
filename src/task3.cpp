#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include "task2.h"
#include <stdlib.h>
#include <stdio.h>



unsigned long long sumPrime(unsigned int hbound)
{
	unsigned int i = 0;
	unsigned long long sum = 0;
	for (i = 1; i < hbound; i++)
	{
		if (checkPrime(i))
			sum = sum + i;
	}
	return sum;
}
