#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
	char *buf = (char*)"123,456,789";
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');
	cout << result[1] << endl;
}