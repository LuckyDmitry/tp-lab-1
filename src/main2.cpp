#include "task2.h"
#include <iostream>


int main()
{
	int n;
	std::cin >> n;
	std::cout << checkPrime(n);
	std::cin >> n;
	std::cout << nPrime(n);
	std::cin >> n;
	std::cout << nextPrime(n);
	getchar();
	getchar();
	return 0;
}