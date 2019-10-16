#include <iostream>
#include "../include/task4.h"
using namespace std;

int main(){
    char string1[] = { "99999999" };
	char string2[] = { "1" };
    cin >> string1 >> string2;
    char * outter = sum(string1, string2);
    for(int i = 0; ; i++){
        cout << outter[i] << " ";
        if(outter[i + 1] == '\0') break;
    }
}