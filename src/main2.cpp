#include "task2.h"

int main() {
	unsigned  long long a = 0;
	bool flag = false;
	flag = checkPrime(173);
	std::cout << flag;
	std::cout << "\n";
	a = nPrime(8);
	std::cout << a;
	std::cout << "\n";
	a = nextPrime(170);
	std::cout << a;
    return 0;
}