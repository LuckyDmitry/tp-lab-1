#include <math.h>
bool checkPrime(unsigned int value)
{
	if ((value <= 0) || (value == 1))
		return false;
	for (int i = 2; i < value; i++) {
		if (value % i == 0)
			return false;
	}
	return true;
}


unsigned long long nPrime(unsigned n)
{
	int i = 0;
	int count = 0;
	while (count != n) {
		if (checkPrime(i)) {
			count++;
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