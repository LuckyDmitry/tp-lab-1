//
// Created by artem on 08.10.2019.
//
#include "task5.h"
#include<malloc.h>
#include<string.h>
#include <iostream>


void split(char ***result, int *N, char *buf, char ch){

    *N = 1;

    for (int i = 0; i < strlen(buf); i++)
        if (*(buf + i) == ch)
            (*N)++;

    *result = (char**) malloc((*N) * sizeof(char*));

    int startIndex = 0;
    int counter = 0;
    for (int i = 0; i < strlen(buf); i++) {
        if (*(buf + i) == ch) {
            char *sub = (char *) malloc((strlen(buf) + 1) * sizeof(char));
            strncpy(sub, buf + startIndex, i - startIndex);
            sub[i - startIndex + 2] = '\0';
            *(*result + counter++) = sub;
            startIndex = i + 1;
        }
    }

    char *sub = (char *) malloc((strlen(buf) + 1) * sizeof(char));
    strncpy(sub, buf + startIndex, strlen(buf) - startIndex);
    *(*result + counter) = sub;

}


