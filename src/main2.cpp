#include "task2.h"

int main() {
	unsigned  long long res = 0;
	bool flag = false;
	flag = checkPrime(12);
	std::cout << flag;
	std::cout << "\n";
	res = nPrime(2);
	std::cout << res;
	std::cout << "\n";
	res = nextPrime(2);
	std::cout << res;
    return 0;
}