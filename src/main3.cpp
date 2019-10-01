#include "task3.h"
#include "task2.h"

int main() {
	unsigned int hbound = 2000000;
	unsigned long long i = 0;
	i = sumPrime(hbound);
	std::cout << i;
	return 0;
}