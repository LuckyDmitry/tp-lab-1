#include "task4.h"
#include <iostream>

int main()
{
	char a[] = "99999999999999999999";
	char b[] = "1";
	char* s = sum(a, b);
	printf("%s", s);
	return 0;
}