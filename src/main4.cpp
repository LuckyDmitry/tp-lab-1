#include <iostream>
#include "task4.h"
#include <string.h>

using namespace std;

int main() {
    char *x = "99999999999999999999";
    char *y = "1";
    char *z = NULL;
    z = sum(x, y);
    int n = strlen(z);
    for (int i = 0; i < strlen(z); i++) {
        cout << z[i];
    }
    return 0;
}

