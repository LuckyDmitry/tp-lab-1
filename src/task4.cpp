#include "task4.h"

char * sum(char *x, char *y) {
    string strX, strY;
    long i = 0;
    while(*(x+i) != '\0') {
        strX+=*(x+i);
        i++;
    }
    i=0;
    while(*(y+i) != '\0') {
        strY+=*(y+i);
        i++;
    }
    cout<<strX<<"\n";
    cout<<strY<<"\n";
    reverse(strX.begin(), strX.end());
    reverse(strY.begin(), strY.end());
    //cout<<strX<<"\n";
    //cout<<strY<<"\n";

    long lenX = strX.length();
    long lenY = strY.length();
    long len;
    int check;
    lenX > lenY ? len = lenX : len = lenY;
    lenX > lenY ? check = 1 : check = 0;

    char* res = (char*)malloc((len) * sizeof(char));

    i = 0;
    int add_num = 0, num, num1;
    string a, b;
    while (i!=len) {
        a = strX[i];
        b = strY[i];
        num =  atoi(a.c_str()) + atoi(b.c_str()) + add_num;
        num1 = num % 10;
        add_num = num / 10;
        *(res +len- i) = num1 + '0';
        i++;
    }
    if (!check) {
        a = strX[i];
        num = atoi(a.c_str()) + add_num;
        *res = num + '0';
    }
    else {
        b = strY[i];
        num = atoi(b.c_str()) + add_num;
        *res = num + '0';
    }

    if (*res == '0')
    {
        for (i = 0; i < len; i++)
            *(res+i) = *(res+i+1);
        *(res+i) = '\0';
    }

    return res;
}