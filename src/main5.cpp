#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
#include<iostream>
#include "task5.h"
using namespace std;
int main() {
	char buf[20] = "123,456,789";
	int N = 0, j = 0;
	char **result = NULL;
	split(&result, &N, buf, ',');
	return 0;
}