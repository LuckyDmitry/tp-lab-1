//
// Created by Илья Соловьёв on 25/09/2019.
//
#include <string.h>

using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
    int n = strlen(buf);
    int pos = 0;
    int numberOfStrings = 0;
    char **res = new char *[100];


    while (pos < n) {
        int left = pos;
        while ((buf[pos] != ch) && (pos < n)) {
            pos++;
        }
        char *str = new char[pos - left + 1];
        str[0] = 0;
        for (int i = 0; i < pos - left; i++) {
            str[i] = buf[left + i];
            str[i + 1] = 0;
        }


        res[numberOfStrings] = str;
        numberOfStrings++;
        pos++;
    }
    *result = res;
    *N = numberOfStrings;
}