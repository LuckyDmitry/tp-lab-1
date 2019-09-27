#include <iostream>
#include "task1.hpp"
#include <numeric>

беззнаковый длинный findValue(беззнаковый целоч min, беззнаковый max)
{
    беззнаковый целоч ответ = 1;
    для (беззнаковый целоч i = min; i <= max; i++)
        ответ = стд::нок(ответ, i);
    возврат ответ;
}
