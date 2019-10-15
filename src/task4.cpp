#include "task4.h"
#include <cstring>
char* sum(char* x, char* y){
    int length_X = strlen(x);
    int length_Y = strlen(y);
    int max_length = length_X > length_Y ? length_X : length_Y;
    --length_X;
    --length_Y;

    char* sum = new char[max_length];
    int rest = 0;

    for (;length_X >= 0 || length_Y >= 0; --length_X, --length_Y){
        int initial_sum = (length_X >= 0 ? x[length_X] : '0') + (length_Y >= 0 ? y[length_Y] : '0') - 2 * '0' + rest;
        sum[length_X > length_Y ? length_X : length_Y] = (initial_sum % 10)+'0';
        rest = initial_sum / 10;
    }

    char* final_sum;
    if (rest){
        final_sum = new char[max_length + 2];
        for (int i = max_length; i > 0; --i)
        {
            final_sum[i] = sum[i - 1];
        }
        final_sum[0] = '1';
        final_sum[max_length + 1] = '\0';
    }
    else{
        final_sum = new char[max_length + 1];
        for (int i = max_length - 1; i >= 0; --i)
        {
            final_sum[i] = sum[i];
        }
        final_sum[max_length] = '\0';
    }
    return final_sum;
}