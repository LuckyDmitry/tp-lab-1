#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long cnt = 0;
	auto j = nextPrime(1);
	while (j <= hbound) {
		cnt += j;
		j = nextPrime(j);
	}
	return cnt;
}
