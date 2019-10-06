#include "task1.h" 
#include <iostream> 
using namespace std;

int main() {
	int min;
	int max;
	cin >> min;
	cin >> max;
	int c = findValue(min, max);
	cout << c;
}