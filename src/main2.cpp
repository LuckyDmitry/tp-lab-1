#include "task2.h"
#include <iostream>
using namespace std;

int main() {
	int a = 2, n = 1;
	//check prime number
	for (int i = 0; i < 3;i++) {
		if (checkPrime(a))
			cout << a << " is the prime number" << endl;
		else
			cout << a << " isn't the prime number" << endl;
		a += 3;
	}
	cout << endl;
	//find number on the n-th place
	for (int i = 0; i < 3; i++) {
		cout << n << "-th number in a row is " << nPrime(n) << endl;
		n += 73;
	}
	//find the next prime
	a = 1;
	cout << endl;
	for (int i = 0; i < 3;i++) {
		cout << "The next prime number after " << a <<" is "<< nextPrime(a)<< endl;
		a += 150;
	}
}
