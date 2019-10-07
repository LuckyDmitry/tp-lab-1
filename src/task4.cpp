//
//  task4.cpp
//  task4
//
//  Created by Андрей Журавлев on 12/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include "task4.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
using namespace std;

char* sum(char* x, char* y) {
    string strX(x), strY(y), strRes;
    if (strX.length() > strY.length())
        swap(strX, strY);
    reverse(strX.begin(), strX.end());
    reverse(strY.begin(), strY.end());
    
    int residue = 0;
    for (int i = 0; i < strX.length(); i++) {
        int sum = int(strX[i] - '0') + int(strY[i] - '0') + residue;
        strRes.push_back(sum % 10 + '0');
        residue = sum / 10;
    }
    for (int i = (int)strX.length(); i < strY.length(); i++) {
        int sum = int(strY[i] - '0') + residue;
        strRes.push_back(sum % 10 + '0');
        residue = sum / 10;
    }
    if (residue)
        strRes.push_back(residue + '0');
    reverse(strRes.begin(), strRes.end());
    
    
    char result[strRes.length() + 1];
    strcpy(result, strRes.c_str());
    return strdup(strRes.c_str());
}
