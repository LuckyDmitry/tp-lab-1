//
// Created by aklen on 25.09.2019.
//
#include <iostream>
#include "task5.h"
using namespace std;

int main(){
    char *buf="32332-4424-525/525-2424{332}";
    char ch;
    char **result;
    int N=0;
    cout<<"Write character for split \n";
    cin>>ch;
    split(&result,&N,buf,ch);
    for (int i=0;i<N;i++){
        cout<<result[i]<<"\n";
    }
    return 0;
}


