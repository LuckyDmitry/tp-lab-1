//
//  main.cpp
//  SortwareLab1-2
//
//  Created by Олеся Мартынюк on 25/09/2019.
//  Copyright © 2019 Olesia Martinyuk. All rights reserved.
//

#include <iostream>
#include "task2.h"

using namespace std;

//Написать прототип библиотеки для работы с простыми (prime) числами.

int main(int argc, const char * argv[]) {
    
    int check_Number;
    cin>>check_Number;
    checkPrime(check_Number)?cout<<"true\n":cout<<"false\n";
    
    unsigned int index;
    cin>>index;
    cout<<nPrime(index)<<endl;
    
    unsigned long long nextPNumb;
    cin>>nextPNumb;
    cout<<nextPrime(nextPNumb)<<endl;
    
 }
