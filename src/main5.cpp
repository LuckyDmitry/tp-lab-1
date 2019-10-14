
#include <iostream>
#include <string.h>
#include "task5.h"
using namespace std;


int main() {
	char* buf = (char*)"ekaterina*the*best*of*the*best";
	int N = 0;
	char** result;
	split(&result, &N, buf, '*');
	cout << result[1] << endl;
	return 0;
}