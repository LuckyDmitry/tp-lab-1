#include <cstring>
#include <algorithm>

//
// Created by artem on 08.10.2019.
//
char * sum(char *x, char *y){
    int mind = 0;
    int lenX = strlen(x);
    int lenY = strlen(y);

    int lenR = std::max(lenX, lenY);
    char *result = new char[lenR + 2];

    while (true)
    {
        int sum = 0;
        if (lenR == 0) {
            result[lenR] = (char)(mind + 48);
            break;
        }
        if (--lenX >= 0 && --lenY >= 0)
            sum = *(x + lenX) - 48 + *(y + lenY) - 48 + mind;
        else if (lenX >= 0)
            sum = *(x + lenX) - 48 + mind;
        else
            sum = *(x + lenY) - 48 + mind;
        if (sum > 9){
            mind = 1;
            sum %= 10;
        } else
            mind = 0;
        result[lenR] = (char)(sum + 48);
        lenR--;

    }

    if (result[0] == '0')
        result++;
    return result;
}

