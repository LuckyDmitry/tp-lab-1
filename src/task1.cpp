//
//  task1.cpp
//  лабораторная работа
//
//  Created by Коля on 25/09/2019.
//  Copyright © 2019 Коля. All rights reserved.
//

#include <iostream>
#include "task1.h"
#include <numeric>

беззнаковый длинный findValue(беззнаковый целоч min, беззнаковый max)
{
    беззнаковый целоч ответ = 1;
    для (беззнаковый целоч и = min; и <= max; и++)
        ответ = стд::нок(ответ, и);
    возврат ответ;
}
