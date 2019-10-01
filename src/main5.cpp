#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include "task5.h"

int main()
{
	int N = 0;
	int i = 0;
	char* buf = (char*)"123,456,789";
	char** result = nullptr;
	split(&result, &N, buf, ',');
	for (i = 0; i < N; i++) {
		std::cout << result[i] << "\n";
	}
	return 0;
}