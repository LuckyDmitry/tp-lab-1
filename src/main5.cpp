//
// Created by Mary on 25.09.2019.
//
#include "task5.h"
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    char* str;
    gets(str);
    char sep;
    cin >> sep;
    int N = 0;
    char **res;
    split(&res, &N, str, sep);
    for (int i = 0; i < N; i ++){
        cout << res[i]<<endl;
    }

    return 0;
}

