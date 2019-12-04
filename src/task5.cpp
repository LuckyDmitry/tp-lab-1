#include "../include/task5.h"
#include <cstring>

void split(char*** result, int* N, char* buf, char ch)
{
    int counter = 0;
    char* newBuffer = new char[strlen(buf) + 1];
    for (unsigned long long  i = 0; i < strlen(buf); i++)
    {
        newBuffer[i] = buf[i];
        if (buf[i] == ch)
            counter++;
    }
    newBuffer[strlen(buf)] = '\0';
    char** res = new char* [counter + 1];

    res[0] = newBuffer;
    int j = 1;
    for (unsigned long long i = 0; i < strlen(buf); i++)
    {
        if (buf[i] == ch)
        {
            newBuffer[i] = '\0';
            if (i != strlen(buf))
            {
                res[j] = &newBuffer[i + 1];
                j++;
            }
        }
    }
    *result = res;
    *N = counter + 1;
} 
