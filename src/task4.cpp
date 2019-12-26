#include "task4.h"
#include <cstring>
#include <new>
using namespace std;

char *strreverse(char *str)
{
    if (!str || ! *str)
        return str;

    int i = strlen(str) - 1, j = 0;
    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

char * sum(char *x, char *y)
{

    unsigned long i = 0, xLen = strlen(x), yLen = strlen(y), maxL = ((xLen>=yLen)?xLen:yLen);
    unsigned short tmp = 0, sum = 0;

    char *res = new char(maxL+2);

    while(i<yLen||i<xLen)
    {
        if ((i<xLen)&&(i<yLen))
        {
            sum = *(x+xLen-i-1)-'0' + *(y+yLen-i-1)-'0' + tmp;
        }
        else if(i<xLen)
        {
            sum = *(x+xLen-i-1) - '0' + tmp;
        }
        else
        {
            sum = *(y+yLen-i-1) - '0' + tmp;
        }

        tmp = int(sum / 10);
        *(res+i)=(sum % 10) + '0';
        i++;
    }

    if(tmp)
    {
        *(res+i) = tmp + '0';
        i++;
    }

    *(res+i) = '\0';
    strreverse(res);
    return res;
}

