#include "../include/task1.h"
unsigned long findValue(unsigned int min,unsigned max){
    unsigned long num = 2;
    while(true){
        for(int i = min; i < max+1; i++){
            if(num % i == 0) {
                if(i == max) return num;
                continue;
            }
            else if(num % i != 0){
                break;
            } 
            
        }
        num += 1;
        
    }
}
