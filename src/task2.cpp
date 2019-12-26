#include "task2.h"
#include <vector>
using namespace std;
bool checkPrime(unsigned int value){
    if (value < 2)return false;
    for (int i = 2; i*i <= value; i++)
        if(value % i == 0) return false;
    return true;
}
unsigned long long nPrime(unsigned n){
    if (n<1)return 0;
    vector<unsigned long long> arr;
    arr.push_back(2);
    for (unsigned long i=3;arr.size()<n;i++){
        unsigned long j=0;
        for (j;j*j<arr.size();j++){
            if (i%arr[j]==0)break;
        }
        if (j*j>=arr.size())arr.push_back(i);
    }
    return arr[n-1];
}
unsigned long long nextPrime(unsigned long long value){
    unsigned long long i=value+1;
    unsigned long long j;
    while(1){
        j=2;
        while(j*j<i){
            if (i%j==0)break;
            j++;
        }
        if (j*j>i)return i;
        i++;
    }
}

