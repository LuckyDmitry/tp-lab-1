#include "task3.h"
#include <iostream>
#include <math.h>
unsigned long long sumPrime(unsigned int hbound) //20
{
    if (hbound<3)return 0;
    unsigned long long i, j, sum = 2;//sum=2 тк в данной реализации алгоритма 2*i+1 не учитывает четные числа (2-простое число)
    hbound=round((hbound)/2);
    auto a = new bool[hbound];
    for (i=1; i<hbound; i++)
        a[i]=true;


    i=1; j=1;
    while ((2*i*j+i+j)<=hbound)
    {
        while (j<=(hbound-i)/(2*i+1))
        {
            a[2*i*j+i+j]=false;
            j++;
        }
        i++;
        j=i;
    }
    for(i=1; i<hbound; i++)
        if(a[i])
            sum+=(2*i+1);
    delete []a;
    return sum;
}
