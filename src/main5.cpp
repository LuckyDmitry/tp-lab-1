#include "task5.h"

int main()
{
	int N = 0;

	char buf[] = "123,456,789";
	char ch = ',';
	char **result = nullptr;
	split(&result, &N, buf, ch);
	return 0;
}