#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	auto cnt = 0;
	auto i = 1;
	while (nPrime(i) < hbound) {
		cnt += nPrime(i);
		i++;
	}
	return cnt;
}
