//
//  task4.cpp
//  lab
//
//  Created by Коля on 13/10/2019.
//  Copyright © 2019 Коля. All rights reserved.
//

#include "task4.hpp"
#include <cstring>
#include <string>

char * sum(char * x, char * y)
{
    std::string a (x), b(y);
    if(a.size() < b.size())
        swap(a, b);

    int j = (int) a.size()-1;
    for(int i=(int) b.size()-1; i>=0; i--, j--)
        a[j]+=(int) (b[i]-'0');

    for(int i=(int) a.size()-1; i>0; i--)
    {
        if(a[i] > '9')
        {
            int d = a[i]-'0';
            a[i-1] = ((a[i-1]-'0') + d/10) + '0';
            a[i] = (d%10)+'0';
        }
    }
    
    if(a[0] > '9')
    {
        std::string k;
        k+=a[0];
        a[0] = ((a[0]-'0')%10)+'0';
        k[0] = ((k[0]-'0')/10)+'0';
        a = k + a;
    }
    return strdup(a.c_str());
}
