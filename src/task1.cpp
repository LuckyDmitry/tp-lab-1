//
//  task1.cpp
//  task1
//
//  Created by Андрей Журавлев on 11/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include "task1.h"
using namespace std;

unsigned long findValue(unsigned int min, unsigned int max)
{
	unsigned int value = max;
	bool flag = false;
	while (!flag)
	{
		value += max;
		for (int i = min; i <= max; i++)
		{
			if (value % i != 0)
			{
				flag = false;
				break;
			}
			flag = true;
		}
	}
	return value;
}
