#include "task2.h"
#include <stdio.h>

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long sum = 0;
	int i = 1;
	for (i = 1; i < hbound; i++) {
		if (checkPrime(i)) {
			sum = sum + i;
		}
	}
	return sum;
}