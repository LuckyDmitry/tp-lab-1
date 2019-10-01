#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include "task2.h"
using namespace std;


int main()
{

	cout << checkPrime(2) << "\n";
	cout << checkPrime(3) << "\n";
	cout << checkPrime(12) << "\n";
	cout << "6th prime number = " << nPrime(6) << "\n";
	cout << "500th prime number = " << nPrime(500) << "\n";
	cout << "next prime after 1031 = " << nextPrime(1031) << "\n";
	cout << "next prime after 3359 = " << nextPrime(3559) << "\n";
	cout << "next prime after 2 = " << nextPrime(2) << "\n";


	return 0;
}