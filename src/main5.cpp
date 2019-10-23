#include <iostream>
#include "task5.h"
#include <string.h>

using namespace std;

int main() {
	char ch = ' ';
	int c;	
	char buf[] = "go hard play hard";
	int N = 0;
	char **result;
	split(&result, &N, buf, ch);
	for (int j = 0; j < N; j++) {
		cout << result[j] << endl;
	}
	cin >> c;
	return 0;
}












/*int main() {
	char buf[] = "go hard play hard";
	int N = 0;
	//char ch = ' ';
	char **result;
	split(&result, &N, buf, ' ');
	for (int j = 0; j < N; j++) {
		cout << result[j] << "\n";
	}

}*/