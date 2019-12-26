#include <math.h>
#include "task2.h"

bool checkPrime(unsigned int value) {
	if (value == 1)  
		return false; 
	for (int i = 2; i <= floor(sqrt(value)); i++) 
		if (value % i == 0) 
			return false; 
	
	return true;
}


unsigned long long nextPrime(unsigned long long value) {

	value++;
	while (!checkPrime(value))
		value++;

	return value;
}

unsigned long long nPrime(unsigned n) {
	int num = 1;
	int temp = 2;
	if (n == 1)
		return 2;
	while (num < n)
	{
		temp++;
		if (checkPrime(temp))
			num++;

		temp++;
	}
	return (temp - 1);
}
