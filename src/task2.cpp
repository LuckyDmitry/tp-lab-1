//
//  task2.cpp
//  SortwareLab1-2
//
//  Created by Олеся Мартынюк on 25/09/2019.
//  Copyright © 2019 Olesia Martinyuk. All rights reserved.
//

#include "task2.h"

bool checkPrime(unsigned int value){ //проверка числа на простоту.
    if (value > 1) { 
        int index = 0; //индикатор простоты 
        for (int i = 2; i<value; i++){
            if (value%i==0) index=1; //если не делится на все предыдушие до value
        }
        if (index!=0) return false; // если индекс остался 0 то true 
        else return true;
    }
    else return false;
}
unsigned long long nPrime(unsigned n){ //нахождение n-ого простого числа (в ряду).
    int index = 0, i = 2; //индекс - простое число по счету
    while (index!=n){ // когда дойдем до н-ного
        if (checkPrime(i)==1){
            index++; //если  i прошла проверку то увеличиваем индекс
        }
        i++;
    }
    return i-1;
}
unsigned long long nextPrime(unsigned long long value){ //нахождение ближайшего следующего простого числа к value.
    unsigned long long nextPrime = value+1; //начинаем со следующего числа 
    while (checkPrime((unsigned int)nextPrime)==false) nextPrime++;
    return nextPrime;
}
