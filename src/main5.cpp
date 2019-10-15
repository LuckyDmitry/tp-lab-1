#include <iostream>
#include "task5.h"

using namespace std;

int main()
{ 
	char ch = ';';
	int N = 1;
	char** result;
	char buf[] = "abc;defey;123";
	split(&result, &N, buf, ch);
	cout << N << endl;
	for (int i = 0; i < N; i++) {
		cout << result[i] << endl;
	}
	system("pause");
}