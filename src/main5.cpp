#include <iostream>
#include "../include/task5.h"
using namespace std;

int main(){
	char str[] = "Hello.world.cruel.world.bye";
	char divide = '.';
	int N = 0;
	char** result;
	split(&result, &N, str, divide);
    for(int i = 0;i < 5 ;i++) cout << result[i] << " ";
    cout << endl;
}