#include "task3.h"
#include "task2.h"
unsigned long long sumPrime(unsigned int hbound){
	auto sum = 0ULL;
	unsigned int cPrime = 0;
	while (true){
		if ((cPrime = nextPrime(cPrime))< hbound){
			sum+=cPrime;
		}
	}
	return sum;
}