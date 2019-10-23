#include "task4.h"

char * sum(char *x, char *y) {
    int lengthx = 0, lengthy = 0, lengthres = 0;
    char* res;
    int save = 0;
    int temp = 0;
    while (*(x + lengthx + 1) != '\0' ) {
        lengthx++;
    }
    while (*(y + lengthy + 1) != '\0' ) {
        lengthy++;
    }
    lengthres = lengthx;
    if (*(x) - '0' + *(y) - '0' > 9) {
        lengthres++;
    }
    res = (char*) malloc ((lengthres + 1) * sizeof(char));
    *(res + lengthres + 1) = '\0';
    while (lengthy >= 0) {
        temp = save + (*(x + lengthx) - '0') + (*(y + lengthy) - '0');
        *(res + lengthres) = (temp % 10) + '0';
        save = temp / 10;
        lengthx--;
        lengthy--;
        lengthres--;
    }
    while(lengthx >=0) {
        temp = save + (*(x + lengthx) - '0');
        *(res + lengthres) = (temp % 10) + '0';
        save = temp / 10;
        lengthx--;
        lengthres--;
    }
    if (save != 0) {
        *(res + lengthres) = save + '0';
    }
    return res;
}

