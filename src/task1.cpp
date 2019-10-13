//
//  task1.cpp
//  lab
//
//  Created by Коля on 25/09/2019.
//  Copyright © 2019 Коля. All rights reserved.
//

#include <iostream>
#include "task1.hpp"


unsigned long findValue(unsigned int min, unsigned max)
{
    unsigned int ans = 1;
    for (unsigned int i = min; i <= max; i++)
        ans = std::lcm(ans, i);
    return ans;
}
