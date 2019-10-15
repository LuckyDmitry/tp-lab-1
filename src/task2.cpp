#include "task2.h"

bool checkPrime(unsigned int value) {
	if (value == 1)
		return false;
		for (unsigned int i = 2; i*i <= value; i++) {
			if (value % i == 0)
				return false;			
		}
	return true;
}

unsigned long long nPrime(unsigned n) {
	for (unsigned int i = 2;;i++) {
		if (checkPrime(i)) {
			n--;
			if (!n)
				return i;
		}
	}
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned long long prime = 2;
	int n = 1;
	while (value >= prime) {
		n++;
		prime = nPrime(n);
	}
	return prime;
}