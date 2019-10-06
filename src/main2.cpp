#include <iostream>
#include "task2.h"
using namespace std;

int main() {
	int k = 3;
	if (checkPrime(k)) {
		cout << "Prime" << endl;
	}
	int prostoe7 = nPrime(k);
	cout << prostoe7 << endl;
	int next = nextPrime(31);
	cout << next << endl;
	//int c;
	//cin >> c;	
}