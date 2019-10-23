#include <iostream>
#include "task5.h"
#include <cstring>

using namespace std;

int main() {
    char *buf = "1=22=333=4444";
    char **result = NULL;
    int N;
    split(&result, &N, buf, '=');
    for (int i = 0; i < N; i++) {
        cout << result[i] << endl;
    }
    return 0;
}