#include "../include/task2.h"
// functions written
bool checkPrime(unsigned int value){
    for(long long i=2; i*i <= value; i++)
		if(value%i == 0)
			return false;
	return true;
}
unsigned long long nPrime(unsigned n)
{
	auto counter = 0;
	for (auto i = 2; ; i++) {
		if (checkPrime(i)) {
			counter++;
		}
		if (counter == n) {
			return i;
		}
	}
}
unsigned long long nextPrime(unsigned long long value)
{
	for (auto i = value+1;; i++) {
		if (checkPrime(i)) {
			return  i;
		}
	}
}

