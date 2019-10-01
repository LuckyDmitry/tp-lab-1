#include <iostream>
#include "task5.h"



int main() {
	char *buf = (char*)"123,456,789";
	int N = 0, i = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');
	std::cout << N << "\n";
	for (i = 0; i < N; i++) {
		std::cout << result[i] << "\n";
	}
	return 0;
}