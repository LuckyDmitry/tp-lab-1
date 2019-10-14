#include "task2.h"
bool checkPrime(unsigned int value) {
	unsigned int i;

	if (value == 1) {
		return false;
	}

	for (i = 2; i * i <= value; i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}
unsigned long long nPrime(unsigned n) {
	unsigned int i = 0;
	unsigned int number = 1;

	while(i!=n){
		number++;
		if (checkPrime(number)) {
			i++;
		}
		

	}
	return number;
}
unsigned long long nextPrime(unsigned long long value) {
	
	
		while (1) {
			value++;
			if (checkPrime(value)) {
				return value;

			}
		}

}