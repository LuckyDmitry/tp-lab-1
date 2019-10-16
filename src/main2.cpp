#include <iostream>
#include "../include/task2.h"
using namespace std;

int main(){
    unsigned int a;
	unsigned int n;
	unsigned long long q;
	unsigned long long b, next_b;
    cout << "To check if prime, enter the number:\n" << endl;
    cin >> a;
    if(checkPrime(a)==true) cout << "That number is prime\n";
    else cout << "That is not the prime number\n";
    cout << "Searching for the next prime number after given:" << endl;
    cin >> b;
    next_b = nextPrime(b);
    cout << "Next prime after " << b << " is " << next_b << endl;
    cout << "Searching for n in row:" << endl;
    cin >> n;
    q = nPrime(n);
    cout << n << " in row number is " << q << endl;
}