//
//  task1.cpp
//  
//
//  Created by Hacker Man on 12.10.2019.
//

#include "task1.h"

unsigned long findValue(unsigned int min,unsigned max)
{
    unsigned int current = max;
    bool status = true;
    while (status)
    {
        current += max;
        for (int i = min; i <= max; i++)
        {
            if (current % i !=0)
            {
                status = true;
                break;
            }
            status = false;
        }
    }
    return current;
}

