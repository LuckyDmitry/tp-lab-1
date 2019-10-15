#include "task2.h"
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long sum = 0, numberToCheck = 2;
	while (numberToCheck < hbound) {
		if (checkPrime(numberToCheck)) {
			sum += numberToCheck;
		}
		numberToCheck++;
	}
	return sum;
}