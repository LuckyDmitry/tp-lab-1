//
// Created by aklen on 25.09.2019.
//
#include <iostream>
#include "string.h"
#include "task4.h"

using namespace std;
char * sum(char *x, char *y){
    int remainder=0;
    int n1=strlen(x);
    int n2=strlen(y);
    if(n2>n1){
        char* tmp=x;
        x=y;
        y=tmp;
        int tmp1=n1;
        n1=n2;
        n2=tmp1;
    }
    int i=1;
    char* z=new char[n1+1];
    z[n1]=0;
    while((n2-i)>=0){
        int s=(int)x[n1-i]-'0'+(int)y[n2-i]-'0'+remainder;
        remainder=s/10;
        z[n1-i]=s%10+'0';
        i++;
    }
    while((n1-i)>=0){
        int s=(int)x[n1-i]-'0'+remainder;
        remainder=s/10;
        z[n1-i]=s%10+'0';
        i++;
    }
    if(remainder){
        char* nz=new char[strlen(z)+2];
        nz[strlen(z)+1]=0;
        for(int i=0;i<strlen(z);i++){
            nz[i+1]=z[i];
        }
        nz[0]=remainder+'0';
        free(z);
        return nz;
    }
    return z;
}