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
    for (int i = min; i <= max; i++)
    {
        while (current % i !=0)
        {
            current += max;
        }
    }
    return current;
}

