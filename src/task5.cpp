//
//  task5.cpp
//  task5
//
//  Created by Андрей Журавлев on 25/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include "task5.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
    string str(buf);
    vector<string> resVect;
    int end = 0;
    while (str.find(ch, end) != string::npos) {
        end = (int)str.find(ch);
        resVect.push_back(str.substr(0, end));
        str = str.substr(end + 1);
    }
    resVect.push_back(str);
    *N = (int)resVect.size();
//    result = new char**[*N];
    *result = new char*[resVect.size()];
    for (int i = 0; i < *N; i++) {
        char *temp = new char[resVect[i].size()];
        strcpy(temp, resVect[i].c_str());
        (*result)[i] = temp;
    }
//    strcpy((*result)[i], resVect[i].c_str());
    int a = 1;
    return;
}
