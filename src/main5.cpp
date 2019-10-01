#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
#include <cstdlib>
#include<iostream>
#include "task5.h"
using namespace std;
int main() {
	char buf[20] = "123,456,789";
	int N = 0, j = 0;
	char **result = NULL;
	split(&result, &N, buf, ',');
	for (int i = 0; i < N; i++) {
		cout << result[i] << "\n";
		delete[] result[i];
	}

	system("pause");
	return 0;
}