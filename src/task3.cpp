#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound) {
	unsigned i = 0;
	unsigned long long result = 0;
	for (i = 2; i < hbound; i++) {
		if (checkPrime(i)) {
			result = result + i;
		}
	}
	return result;
}