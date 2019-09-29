#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
#include <cstdlib>
#include<iostream>
#include "task5.h"
using namespace std;
int main() {
	char buf[] = "123,456,789";
	int N = 0, j = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');

	for (int i = 0; i < N; i++) {
		j = 0;
		while (*(*(result + i) + j) != '\0') {
			cout << *(*(result + i) + j);
			j++;
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}