#include "task2.h"
#include <math.h>
bool checkPrime(unsigned int value) {
	if (value < 2) {
		return false;
	}
	for (unsigned int i = 2; i <= sqrt(value); i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n) {
	unsigned int c = 1;
	unsigned long long val = 2;
	while (c != n) {
		val++;
		if (checkPrime(val)) {
			c++;
		}
	}
	return (val);
}
unsigned long long nextPrime(unsigned long long value) {
	while (checkPrime(value + 1) == 0) {
		value++;
	}
	return value+1;

}