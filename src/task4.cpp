//
// Created by daria on 01.10.2019.
//

#include "task4.h"
#include <string.h>


using namespace std;

char* sum(char *x, char *y) {
    int lenx = strlen(x);
    int leny = strlen(y);
    int max = leny;
    if (lenx > leny)max = lenx;

    char *res = new char[max + 2];
    res[max + 1] = '\0';


    char *px = x + lenx - 1;
    char *py = y + leny - 1;
    int ost = 0;
    int summ = 0;
    for (int i = max; i >= 0; i--) {
        if (px < x && py < y) {
            summ = ost;

        }
        if (px >= x && py >= y) {
            summ = *px - 48 + *py - 48 + ost;
            if (summ > 9) {
                summ = summ % 10;
                ost = 1;
            } else ost = 0;
        }
        if (px < x && py >= y) {
            summ = *py - 48 + ost;
            if (summ > 9) {
                summ = summ % 10;
                ost = 1;
            } else ost = 0;
        }
        if (py < y && px >= x) {
            summ = *px - 48 + ost;
            if (summ > 9) {
                summ = summ % 10;
                ost = 1;
            } else ost = 0;
        }
        res[i] = summ + 48;
        summ = 0;
        px--;
        py--;
        if (res[0] == '0')res++;
    }


    return res;
}