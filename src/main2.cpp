#include "task2.h"

/*  */

int main() // точка входа в систему 
{
	setlocale(LC_ALL, "Ru");

	
	//Fn1
	if (checkPrime(12))
		cout << 1;
	else
		cout << 0;
	//Fn2
	cout<< endl << nPrime(500);
	cout << endl << nextPrime(3559);


	return 0;
}