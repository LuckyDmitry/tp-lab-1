#include "task5.h"

void split(char ***result, int *N, char *buf, char ch) {
    int pos = 0;
    int prevpos = 0;
    int temp = 0;
    *N = 1;
    while (*(buf + pos) != '\0') {
        if(*(buf + pos) == ch) {
            *N = *N + 1;
        }
        pos++;
    }
    pos = 0;
    temp = *N;
    *result = (char**) malloc (temp * sizeof(char*));
    temp = 0;
    while (*(buf + pos) != '\0') {
        if (*(buf + pos) == ch) {
            *(*(result) + temp) = (char*) malloc ((pos - prevpos) * sizeof(char));
            for (int i = 0; (prevpos + i) < pos; i++) {
               *(*(*(result) + temp) + i) = *(buf + prevpos + i);
            }
            temp++;
            prevpos = pos;
            prevpos++;
        }
        pos++;
    }
    *(*(result) + temp) = (char*) malloc (((pos - prevpos) + 1) * sizeof(char));
    for (int i = 0; (prevpos + i) < pos; i++) {
        *(*(*(result) + temp) + i) = *(buf + prevpos + i);
    }
}
