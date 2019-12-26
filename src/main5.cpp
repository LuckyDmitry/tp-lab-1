#include "task5.h"
#include <iostream>
using namespace std;

int main() {
	char** result;
	int N;
	char str[] = "gkkljvggetghetlg";
	split(&result, &N, str, 'g');
	cout <<"is "<< N << endl;
	for (int i = 0; i < N; i++) {
		cout <<i<<" "<< result[i] << endl;
	}
}