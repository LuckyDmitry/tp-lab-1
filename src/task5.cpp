//
// Created by Mary on 25.09.2019.
//
#include "task5.h"
#include <iostream>
using namespace std;
void split(char ***result, int *N, char *buf, char ch){
    int i = 0;
    int l = 0;
    int n = 0;
    (*result) = new char*[n];
    while (buf[i]){
        if (buf[i] == ch){
            (*result)[n] = new char[l+1];
            for (int j = 0; j < l; j ++){
                (*result)[n][j] = *(buf + i - l + j);
            }
            (*result)[n][l] = 0;
            n += 1;
            l = 0;
        }else{
            l++;
        }
        i++;
    }
    (*result)[n] = new char[l+1];
    for (int j = 0; j < l; j ++){
        (*result)[n][j] = *(buf + i - l + j);
    }
    (*result)[n][l] = 0;
    n += 1;
    *N = n;


}
