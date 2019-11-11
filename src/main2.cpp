#include <iostream>
#include "task2.h"

using namespace std;

int main()
{
	unsigned int isPrime;
	unsigned n;
	unsigned long long nxtPrime;
	cout << "checkPrime\n";
	cin >> isPrime;
	cout << checkPrime(isPrime);

	cout << "\nnPrime\n";
	cin >> n;
	cout << nPrime(n);

	cout << "\nnextPrime\n";
	cin >> nxtPrime;
	cout << nextPrime(nxtPrime);
}