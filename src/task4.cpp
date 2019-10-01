//
// Created by Mary on 24.09.2019.
//
#include <iostream>
#include "task4.h"
using namespace std;
int reverse(char *x){
    int len = 1;
    while ((*(x + len) >= '0')&&(*(x + len) <= '9')){
        len ++;
    }
    for (int i = 0; i < len/2; i ++){
        char tmp = *(x + i);
        *(x + i) = *(x + len - i - 1);
        *(x + len - i - 1) = tmp;
    }
    return len;
}
char * sum(char *x, char *y){
    int i = 0;
    while (*(x + i) == '0')i ++;
    x = x + i;
    i = 0;
    while (*(y + i) == '0') i ++;
    y = y + i;
    int lenx = reverse(x), leny = reverse(y);
    int max;
    if (lenx > leny) max = lenx;
    else max = leny;
    int c = 0;
    for (int i = 0; i < max; i ++){
        if ((*(y + i) < '0')||(*(y + i) > '9')) *(y + i) = '0';
        if ((*(x + i) < '0')||(*(x + i) > '9')) *(x + i) = '0';
        c = c + (*(x + i)-'0') + (*(y + i)-'0');
        *(x + i) = '0' + (c % 10);
        c /= 10;
    }
    if (c != 0){
        *(x + max) = c + '0';}
    *(x + max + 1) = 0;
    reverse(x);
    return x;
}

