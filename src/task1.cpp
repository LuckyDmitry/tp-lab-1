//
//  task1.cpp
//  SoftwareLab1
//
//  Created by Олеся Мартынюк on 25/09/2019.
//  Copyright © 2019 Olesia Martinyuk. All rights reserved.
//

#include "task1.h"
//   Написать программу, определяющую, какое самое маленькое положительное целое 
//   число делится на все числа из диапазона [1...20] без остатка.
unsigned long findValue(unsigned int min,unsigned max){
    int startValue = max; //начальное значение будет max 
    for (int i=min; i< max+1; i++){
        if (startValue%i!=0){ //до тех пор пока не найдем число на которое не делится 
            startValue+=max; 
            i=min; //откатываю i до min
        }
    }
    return startValue;
}
