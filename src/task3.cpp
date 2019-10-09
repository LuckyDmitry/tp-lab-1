//
//  task3.cpp
//  task3
//
//  Created by Андрей Журавлев on 12/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include <iostream>
#include "task3.h"
#include "math.h"
using namespace std;

 unsigned long long sumPrime(unsigned int hbound){
        unsigned curr = 3;
        unsigned long long sum = 2;
        bool flag;
        if(hbound < 2)
            return 0;
        while (curr < hbound){
            flag = false;
            for(int i = 3; i <= sqrt(curr); i += 2)
                if(curr % i == 0) {
                    flag = true;
                    break;
                }
            if (flag == false)
                sum += curr;
            curr += 2;
        }
        return sum;
} 
