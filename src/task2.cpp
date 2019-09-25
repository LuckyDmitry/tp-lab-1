#include <iostream>
using namespace std;

bool checkPrime(unsigned int value)  // проверка числа на простоту.
{
	if (value == 1) return false;
	int flag = 1;
	for (unsigned int i = 2; i < sqrt(value)+1; i++)
	{
		if (value%i == 0 && value!=i) {
			flag = 0;
		}
	}
	 if (flag == 1) return true;
	else return false;
}
unsigned long long nPrime(unsigned n) // нахождение n - ого простого числа(в ряду).
{
	unsigned count = 0;
	unsigned long long val=0;
	while (count != n)
	{
		val++;
		if (checkPrime(val) == true) count++;
	}
	return val;
}
unsigned long long nextPrime(unsigned long long value) // нахождение ближайшего следующего простого числа к value.
{
	unsigned long long next = value + 1;
	while (checkPrime(next) != true)
		next++;
	return next;
}
