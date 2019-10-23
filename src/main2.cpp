#include <iostream>
#include "task2.h"

using namespace std;

int main() {
    cout << "Enter a number" << endl;
    int n;
    cin >> n;
    if (checkPrime(n) == 1) {
        cout << n << " is prime!" << endl;
    } else {
        cout << n << " is not prime!" << endl;
    }
    cout << n << "th prime number is " << nPrime(n) << endl;
    cout << "Next prime number after " << n << " is " << nextPrime(n) << endl;
    return 0;
}