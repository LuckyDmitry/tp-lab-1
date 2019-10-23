#include "task5.h"
#include <iostream>

int main() {
	char str[] = "Hello_world_my_name_is_Evgeny";
	char dev = '_';
	int N = 0;
	char** result;
	split(&result, &N, str, dev);

	std::cout << result[1] << "\n";
	system("Pause");
}