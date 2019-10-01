//
// Created by Mary on 25.09.2019.
//
#include "task4.h"
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
     char str1 [100], str2[100];
     gets(str1);
     gets(str2);
     char* ans = sum(str1, str2);
     for (int i = 0; ((ans[i] >= '0')&&(ans[i] <= '9')); i ++){
         cout << ans[i];
     }
    return 0;
}
