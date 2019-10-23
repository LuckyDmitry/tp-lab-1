#include "task2.h"
bool checkPrime(unsigned int value){
	bool is_prime = true;
	for (int i = 2; i < value; i++){
		if (value%i == 0){
			is_prime = false;
			break;
		}
	}
	return is_prime;
}
unsigned long long nPrime(unsigned n){
	auto i = 1ULL;
	auto index = 0U;
	while(true){
		if (checkPrime(i)){
			if (index == n){
				return i;
			}
			index++;
		}
		i++;
	}
}
unsigned long long nextPrime(unsigned long long value){
	auto item = value+1;
	while(true){
		if (checkPrime(item)){
			return item;
		}
		item++;
	}
}