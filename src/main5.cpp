#include <iostream>
#include "task5.h"

using namespace std;

int main()
{
	char** result;
	int N = 0;
	char buf[] = "991:992:993:994:995:996";
	split(&result, &N, buf, ':');
	cout << N << endl;
	for (int i = 0; i < N; i++) {
		cout <<result[i] <<endl;
	}
}