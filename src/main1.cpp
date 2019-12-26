#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "../include/task1.h"
using namespace std;

int main(){
    unsigned int min, max;
    cin >> min >> max;
    cout << findValue(min, max);
	return 0;
}
