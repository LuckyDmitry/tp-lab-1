#include "task4.h"

int main() {

    char *x="123456789";
    char *y="000000001";
    char *z = sum(x,y);
    cout<<"123456790"<<"\n";
    int i = 0;
    while (*(z+i)!='\0'){
        cout<<*(z+i);
        i++;
    }

    cout<<"\n";
    cout<<"\n";

    char *xx="99999999999999999999";
    char *yy="1";
    char *zz=sum(xx,yy);
    cout<<"100000000000000000000"<<"\n";
    i = 0;
    while (*(zz+i)!='\0')
    {
        cout<<*(zz+i);
        i++;
    }

}