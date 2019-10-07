//
//  main.cpp
//  task4
//
//  Created by Андрей Журавлев on 12/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include "task4.h"

using namespace std;

void print(const char *str) {
    cout << strlen(str) << endl;
}


int main(int argc, const char * argv[]) {
//    cout << sum(x, y) << endl;
//    char *res = sum(x, y);
    char *x="99999999999999999999";
    char *y="1";
    char *expected="100000000000000000000";
    char *z = sum(x, y);
    cout << strcmp(expected, z) << endl;
    
}
