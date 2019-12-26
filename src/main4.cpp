#include "task4.h"
#include <iostream>

int main(){
    char a[] = "99999999999999999999";
    char b[] = "1";
    std::cout << a << " + " << b  << " = " << sum(a, b);
    return 0;
}
