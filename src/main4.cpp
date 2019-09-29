#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
#include <cstdlib>
#include <iostream>
#include "task4.h"
using namespace std;
int main() {
	char str1[30] = { '0' }, str2[30] = { '0' }, *ret;
	scanf("%s%s", str1, str2);
	ret = sum(str1, str2);
	int i = 0;
	while (*(ret + i) != '\0') {
		cout << *(ret + i);
		i++;
	}
	system("pause");
	return 0;
}