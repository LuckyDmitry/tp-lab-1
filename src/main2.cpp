#include <iostream>
#include "task2.h"
using namespace std;
int main()
{
    for(int i=0;i<20;i++){cout<<nPrime(i)<<'\n';}
    for(int i=0;i<20;i++){cout<<checkPrime(i)<<'\n';}
    for(int i=0;i<1000;i+=50){cout<<nextPrime(i)<<'\n';}
    return 0;
}
