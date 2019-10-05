#include <iostream>
#include "task2.h"
using namespace std;

int main() {
    unsigned int num;
    cin>>num;
    bool f=checkPrime(num);
    if (f == true) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    cout<<"Enter nth prime"<<endl;
    unsigned n;
    cin>>n;
    unsigned long long a=nPrime(n);
    cout<<a<<endl;

    cout<<"Enter value to next prime"<<endl;
    cin>>n;
    cout<<nextPrime(n)<<endl;

    return 0;
}