#include "task2.h"

bool checkPrime(unsigned int value) {
	int i = 0;
	if (value <= 0 || value == 1) {
		return false;
	}
	for (i = 2; i < sqrt(value) + 1; i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n) {
	unsigned long long i = 1;
	while (n > 0) {
                i++;
		if (checkPrime(i)) {
			n--;
		}
	}
	return i;
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned long long i = value;
	while (1) {
		i++;
		if (checkPrime(i)) {
			break;
		}
	}
	return i;
}
