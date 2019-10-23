#include <stdio.h>
#include <math.h>

bool checkPrime(unsigned int value) {
	int i;
	int k = 0;
	if (value<=1) {
		return false;
	}
	for (i = 2; i < (round(sqrt(value))+1); i++) {
		if (value%i==0) {
			k = 1;
			break;
		}
	}
	if (k == 0) {
		return true;
	}
	else {
		return false;
	}
}
unsigned long long nPrime(unsigned n) {
	unsigned long long res = 0;
	int k = 0;
	int i = 2;
	while (k < n) {
		if (checkPrime(i)) {
			k = k + 1;
			res = i;
		}
		i = i + 1;
	}
	return res;
}
unsigned long long nextPrime(unsigned long long value) {
	unsigned long long i=value;

	if (value <= 1) {
		return 2;
	}
	while (1) {
		i = i + 1;
		if (checkPrime(i)) {
			return i;
		}
	}
}