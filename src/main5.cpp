#include <iostream>
#include "task5.h"
#include <string.h>
using namespace std;

int main()
{
	char **result;
	char buf[] = "i,hope,you,will,work";
	int N = 0;
	split(&result, &N, buf, ',');
	for (int i = 0; i < N; i++)
		cout << result[i] << "\n";
	return 0;
}
