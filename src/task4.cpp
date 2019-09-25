//
// Created by Илья Соловьёв on 25/09/2019.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

char *sum(char *x, char *y) {
    int n = strlen(x);
    int m = strlen(y);

    if (m > n) {
        char *tmp = x;
        x = y;
        y = tmp;
        int len = n;
        n = m;
        m = len;
    }

    char *str = new char[n];
    int i = 1;
    int rest = 0;
    while (m - i >= 0) {
        int sum = (int) x[n - i] - '0' + (int) y[m - i] - '0' + rest;
        rest = sum / 10;
        int right = sum % 10;
        str[n - i] = right + '0';
        i++;
    }

    while (n - i >= 0) {
        int sum = (int) x[n - i] - '0' + rest;
        rest = sum / 10;
        int right = sum % 10;
        str[n - i] = right + '0';
        i++;
    }

    if (rest) {
        char *newstr = new char[strlen(str) + 1];
        for (int i = 0; i < strlen(str); i++) {
            newstr[i + 1] = str[i];
        }
        newstr[0] = rest + '0';
        delete (str);
        return newstr;
    }


    return str;

}