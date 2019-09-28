#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main() {
	char A[]="12345";
	char B[]="123456";
//	char A[] = "123456789";
//	char B[] = "000000001";
	//char A[] = "99999999999999999999";
	//char B[] = "1";
	//char A[] = "99";
	//char B[] = "1";
	printf("\n%s\n",sum(A, B));

	return 0;
}