#include <iostream>
#include "task2.h"

using namespace std;

int main() {
	unsigned long long n;
	cout << "Enter a number" << endl;
	cin >> n;
	cout << "Check prime: " << checkPrime(n) << endl;
	cout << "nPrime: " << nPrime(n) << endl;
	cout << "Next prime: " << nextPrime(n) << endl;
	system("pause");
}