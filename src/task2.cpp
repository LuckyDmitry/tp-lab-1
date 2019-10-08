#include "task2.h"

bool checkPrime(unsigned int value)
{
	if (value == 1) {
		return false;
	}
	for (auto i = 2; i < value; i++) {
		if (!(value % i)) {
			return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n)
{
	auto cnt = 0;
	for (auto i = 2;; i++) {
		if (checkPrime(i)) {
			cnt++;
		}
		if (cnt == n) {
			return i;
		}
	}
}

unsigned long long nextPrime(unsigned long long value)
{
	for (auto i = value+1;; i++) {
		if (checkPrime(i)) {
			return  i;
		}
	}
}
