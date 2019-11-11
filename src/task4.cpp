#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <malloc.h>
#include <string>
#include <cstdlib>
#include <vector>
#include <cstring>
#include <algorithm>


using namespace std;

char * sum(char* x, char* y)
{
	int num1=0, num2=0, num3=0;
	int l3,l1,l2;
	int lx = strlen(x);
	int ly = strlen(y);
	l2 = ly;
	l1 = lx;
	l3 = lx + 1;
	vector<char> s1;
	vector<char> s2;
	vector<char> s3;
	


	for (int i = 0; i < lx; i++)
		s1.push_back(x[i]);
	reverse(s1.begin(), s1.end());

	for (int i = 0; i < ly; i++)
		s2.push_back(y[i]);
	reverse(s2.begin(), s2.end());

	/*for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i];
	}
	cout << " ";
	for (int i = 0; i < s2.size(); i++)
	{
		cout << s2[i];
	}*/


	int n;
	
	if (s1.size() > s2.size())
	{
		n = s1.size() - s2.size();
		
		for (int i = 0; i < n; i++)
			s2.push_back('0');
	}
	else
	{
		n = s2.size() - s1.size();
	
		if (s1.size() < s2.size())
			for (int i = 0; i <n; i++)
				s1.push_back('0');
	}
	
	






	char k;
	for (int i = 0; i <s1.size(); i++)
	{
		num1=s1[i]-'0';
		num2 =s2[i] - '0';
		k = (num1 + num2 + num3) % 10 + '0';
		s3.push_back(k);
		num3 = (num1 + num2 + num3) / 10;
	


	}
	
	if (num3 == 1)
	{
		k = '1';
		s3.push_back(k);
		reverse(s3.begin(), s3.end());

	}else
	{
		reverse(s3.begin(), s3.end());
	}

	char* result = new char[s3.size()+1];
	for (int i = 0; i < s3.size(); i++)
	{
		result[i] = s3[i];
		
	}

	

	return result;
}