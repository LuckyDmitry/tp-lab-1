#include "task2.h"
#include "task3.h"
unsigned long long sumPrime(unsigned int hbound) {

	unsigned long long sum= 0;
	unsigned int pr = 2;

	while (pr<=hbound) {
		
		sum = sum + pr;
		pr = nextPrime(pr);
		
	}
	return sum;
}
