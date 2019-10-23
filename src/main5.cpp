#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task5.h"

int main() {

		int N = 0;
		char** result = nullptr;
		char buf[] = "123,456,789";
		split(&result, &N, buf, ',');

	return 0;
}