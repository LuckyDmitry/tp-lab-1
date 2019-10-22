#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <iostream>

int main()
{
	char buf[] = "You are having very good time";
	int N = 0;
	char **result = NULL;

	split(&result, &N, buf, ' ');

	for (int i = 0; i < N+1; ++i)
	{
		printf("%s\n", result[i]);
	}
	return 1;
}  
