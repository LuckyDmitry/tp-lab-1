#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include "task2.h"


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



