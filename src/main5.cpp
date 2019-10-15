#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task5.h"

int main()
{
	const char buf[] = "You are having very good time";
	int N = 0;
	char **result = NULL;

	split(&result, &N, buf, ' ');

	for (int i = 0; i < N+1; ++i)
	{
			printf("\n%s", result[i]);
	}
	return 1;
}  
