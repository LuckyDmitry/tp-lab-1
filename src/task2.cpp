#include "task2.h"
#include <cmath>

bool checkPrime(unsigned long long value) {
	if (value < 2) {
		return 0;
	}
	if (value > 2) {
		for (unsigned long long i = 2; i <= sqrt(value) + 1; i++) {
			if (value % i == 0) {
				return 0;
			}
		}
	}
	return 1;
}

unsigned long long nPrime(unsigned n) {
	unsigned i = 0;
	unsigned long long numberToCheck = 1;
	while (i < n) {
		numberToCheck++;
		if (checkPrime(numberToCheck)) {
			i++;
		}
	}
	return numberToCheck;
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned long long numberToCheck = value;
	while (1) {
		numberToCheck++;
		if (checkPrime(numberToCheck)) {
			return numberToCheck;
		}
	}
}