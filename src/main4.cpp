#include "task4.h"
#include <iostream>
using namespace std;


int main() {
	char a[] = "999999999999999";
	char b[] = "111111111111111";
	cout <<"Summa "<<a<<" and "<<b<<" is "<< sum(a,b) << endl;
	char c[] = "12";
	char d[] = "0";
	cout << "Summa " << c << " and " << d << " is " << sum(c, d) << endl;
	char e[] = "1236467";
	char f[] = "5667";
	cout << "Summa " << e << " and " << f << " is " << sum(e, f) << endl;
}