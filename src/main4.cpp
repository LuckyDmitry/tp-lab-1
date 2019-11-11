#include <iostream>
#include <string>
#include "task4.h"

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b; 
	char *x = &a[0], *y = &b[0];
	cout <<sum(x,y);
}