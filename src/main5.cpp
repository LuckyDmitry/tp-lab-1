#include <iostream>
#include "task5.h"



int main() {
	char buf[] = "avsc/2weq/123";
	int N = 0, i = 0;
	char **result = nullptr;
	char ch = '/';
	split(&result, &N, buf, ch);
	for (i = 0; i < N; i++) {
		std::cout << result[i] << "\n";
	}
	return 0;
}