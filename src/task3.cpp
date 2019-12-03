#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0, value = 1;
	while (value < hbound) {
		value++;
		if (checkPrime(value)==1)
			sum += value;
	}
	return sum;
}