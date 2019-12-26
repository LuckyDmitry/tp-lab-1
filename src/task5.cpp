#include "task5.h"
#include <cstring>

void split(char*** result, int* N, char* buf, char ch)
{
    int counter = 1;
    int size = strlen(buf);
    char* newBuffer = new char[size + 1];
    for (int i = 0; i < size; ++i){
        newBuffer[i] = buf[i];
        if (buf[i] == ch) ++counter;
    }
    newBuffer[size] = '\0';
    char** res = new char* [counter];

    res[0] = newBuffer;
    int j = 1;
    for (int i = 0; i < size; ++i){
        if (buf[i] == ch){
            newBuffer[i] = '\0';
            res[j++] = &newBuffer[i + 1];
        }
    }
    *result = res;
    *N = counter;
}