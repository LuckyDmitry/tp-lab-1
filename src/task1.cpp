#include "task1.h"
unsigned long findValue(unsigned int min,unsigned int max){
    unsigned long current_lcm = 1;
    for (unsigned long i = (unsigned long)min; i<(unsigned long)max; i++){
        current_lcm = lcm (i,current_lcm);
    }
    return current_lcm;
}
unsigned long lcm(unsigned long a, unsigned long b){
    return (a * b)/gcd(a, b);
}

unsigned long gcd(unsigned long a, unsigned long b){
    unsigned long tmp;
    while (b){
        tmp = a;
        a = b;
        b = tmp%b;
        }
    return a;
}
