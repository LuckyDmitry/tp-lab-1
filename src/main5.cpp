#include <iostream>
#include "task5.h"
#include <string.h>

int main()
{
	char **result;
	char buf[] = "Hello world i am a programmer";
	int N = 0;
	split(&result, &N, buf, ' ');
	for (int i = 0; i < N; i++)
	{
		std::cout << result[i] << "\n";
	}
	return 0;
}