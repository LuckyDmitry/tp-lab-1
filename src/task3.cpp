#include "task3.h"
#include "task2.h"
using namespace std;

unsigned long long sumPrime(unsigned int hbound) {
	unsigned int i = 0;
	unsigned long long result = 0;
	for (i = 2; i < hbound; i++) {
		if (checkPrime(i)) result = result + i;
	}
	return result;
}