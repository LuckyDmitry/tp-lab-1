#include <iostream>
#include "task2.h"
int main() {
	unsigned int a;
	unsigned n;
	unsigned long long v;
	std::cin >> a >> n >> v;
	std::cout <<  "checkPrime \n" << checkPrime(a) << "\n nPrime \n" << nPrime(n) << "\n nextPrime \n" << nextPrime(v);
	return 0;
}