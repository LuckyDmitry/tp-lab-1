#include "task3.h"
#include "task2.h"
unsigned long long sumPrime(unsigned int hbound){
	auto sum = 0ULL;
	unsigned int cPrime = 0;
	while (true){
		cPrime = nextPrime(cPrime);
		if (cPrime < hbound){
			sum+=cPrime;
		}
		else{
			break;
		}
	}
	return sum-1;
}