#include <iostream>
#include <string>
#include "task5.h"

using namespace std;

int main()
{
	string b;
	char *buf;
	int N = 0;
	char ch;
	cin >> b >> ch;
	buf = &b[0];
	char **result;
	split(&result, &N, buf, ch);
	cout << N<<'\n';
	for (int i = 0; i < N; i++)
	{
		cout << result[i]<<'\n';
	}
}