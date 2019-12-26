#include "../include/task3.h"
#include "../include/task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long counter = 0;
	auto j = 2;
	while (j <= hbound) {
		counter += j;
		j = nextPrime(j);
	}
	return counter;
}