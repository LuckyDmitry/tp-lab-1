#include "task5.h"
#include <string>
#include <iostream>


int main()
{
	const char *buf = "123,456,789";
	int N = 0;
	char **result = nullptr;
	split(&result, &N, (char*)buf, ',');

	std::cout << N << "\n";

	for (int i = 0; i < N; i++)
	{
		char* res = result[i];
		std::string out(res);
		std::cout << out << "\n";
	}

	return 0;
}