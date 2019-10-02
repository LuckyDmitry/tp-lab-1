#include <iostream>
#include <cstring>
#include "task4.h"
using namespace std;
char * sum(char *x, char *y){
    int lenx = strlen(x);
    int leny = strlen(y);
    if (leny > lenx){
        int tmp = lenx;
        lenx = leny;
        leny = tmp;
        char *tmpp = x;
        x = y;
        y = tmpp;
    }
    char *res = new char[lenx + 1];
    res[lenx] = 0;
    int i = 0;
    int remind = 0;
    while (leny - i > 0){
        int cur = x[leny - i - 1] - '0' + y[leny - i - 1] - '0' + remind;
        res[i] = '0' + (cur % 10);
        remind = cur / 10;
        i++;
    }
    while (lenx - i > 0){
        int cur = x[lenx - i - 1] - '0' + remind;
        res[i] = '0' + (cur % 10);
        remind = cur /10;
        i ++;
    }
    if (remind){
        res[i] = '0' + remind;
        i++;
    }
    for (int j = 0; j < i/2; j ++){
        char tmp = res[j];
        res[j] = res[i - j - 1];
        res[i - j - 1] = tmp;
    }
    res[i] = 0;
    return res;
}