//
// Created by daria on 01.10.2019.
//

#include "task5.h"
#include <iostream>
#include <cstring>

void split(char ***result, int *N, char *buf, char ch) {
    *N = 0;
    int lenbuf = strlen(buf);
    for (int i = 0; i < lenbuf; i++) {
        if (buf[i] == ch) {
            (*N)++;
        }
    }
    (*N)++;

    *result = (char **) malloc((*N) * sizeof(char *));
    char *str = (char *) malloc((lenbuf + 1) * sizeof(char));
    str[lenbuf] = '\0';
    *(*result) = str;
    int numind = 1;

    for (int i = 0; i < lenbuf; i++) {
        str[i] = buf[i];
        if (str[i] == ch) {
             str[i] = '\0';
            *(*result + numind) = str + i + 1;
            numind++;
        }
    }
}