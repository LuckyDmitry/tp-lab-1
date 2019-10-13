#include "task2.h"
#include <iostream>


int main()
{
	std::cout << "checkPrime(2)    : " << checkPrime(2) << "\n";
	std::cout << "checkPrime(3)    : " << checkPrime(3) << "\n";
	std::cout << "checkPrime(12)   : " << checkPrime(12) << "\n";
	std::cout << "checkPrime(3571) : " << checkPrime(3571) << "\n\n";

	std::cout << "nPrime(6)        : " << nPrime(6) << "\n";
	std::cout << "nPrime(6)        : " << nPrime(500) << "\n\n";

	std::cout << "nextPrime(1031)  : " << nextPrime(1031) << "\n";
	std::cout << "nextPrime(3559)  : " << nextPrime(3559) << "\n";
	std::cout << "nextPrime(2)     : " << nextPrime(2) << "\n\n";


	return 0;
}
