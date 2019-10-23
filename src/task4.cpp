#include "task4.h"
#include <string>

char * sum(char *x, char *y)
{
	std::string X(x);
	std::string Y(y);
	
	//X.pop_back();
	//Y.pop_back();

	int res_size = X.size();
	if (Y.size() > res_size) res_size = Y.size();

	res_size;
	char* resArray = new char[res_size + 2];
	resArray[res_size] = 0;
	resArray[0] = '0';
	int index = res_size - 1;
	int carry = 0;

	while ((Y.size() > 0 ) && (X.size() > 0))
	{
		int res = (Y.back() - '0') + (X.back() - '0') + carry;
		X.pop_back();
		Y.pop_back();
		if (res > 9)
		{
			res = res % 10;
			carry = 1;
		}
		else
		{
			carry = 0;
		}
		resArray[index] = res + '0';
		index--;
	}
	
	while (Y.size() > 0)
	{
		int res = (Y.back() - '0')+ carry;
		Y.pop_back();
		if (res > 9)
		{
			res = res % 10;
			carry = 1;
		}
		else
		{
			carry = 0;
		}
		resArray[index] = res + '0';
		index--;
	}

	while (X.size() > 0)
	{
		int res = (X.back() - '0') + carry;
		X.pop_back();
		if (res > 9)
		{
			res = res % 10;
			carry = 1;
		}
		else
		{
			carry = 0;
		}
		resArray[index] = res + '0';
		index--;
	}
	
	if (carry)
	{
		for (int i = res_size + 1; i > 0; i--)
		{
			resArray[i] = resArray[i - 1];
		}
		resArray[0] = '1';
	}

	return resArray;
}