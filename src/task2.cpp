#include <math.h>
bool checkPrime(unsigned int value) {
	bool flag = true;
	int i = 2;
	if (value % i == 0 && i < round(sqrt(value) + 1)) {
		return false;
	}
	i = 3;
	while (i < round(sqrt(value) + 1)) {
		if (value % i == 0) {
			return false;
		}
		i += 2;
	}
	return flag;
}
unsigned long long nPrime(unsigned n) {
	unsigned int i = 2;
	while (n != 0) {
		if (checkPrime(i)) {
			n--;
		}
		i++;
	}
	i--;
	return i;
}
unsigned long long nextPrime(unsigned long long value) {
	int n = 1;
	value++;
	while (n != 0) {
		if (checkPrime(value)) {
			n--;
		}
		value++;
	}
	value--;
	return value;
}