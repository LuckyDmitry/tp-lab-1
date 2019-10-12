 #include "task4.h"
 #include <iostream>
 #include <string>
 #include <stdio.h>
 #include <string.h>
 using namespace std;

 char* sum(char* x, char* y) 
{
	  string pre_first_number(x), pre_second_number(y), result;
	
	  if (pre_first_number.length() > pre_second_number.length())
	  {
		string pre_temp = pre_second_number;
		pre_second_number = pre_first_number;
		pre_first_number = pre_temp;
      }

	  string first_number;
	  int pre_first_length = pre_first_number.length();
	  for(int i = 1; i <= pre_first_length; i++) 
	  { 
		 first_number += pre_first_number[pre_first_length - i];
	  } 
	  
	  string second_number;
	  int pre_second_length = pre_second_number.length();
	  for(int i = 1; i <= pre_second_length; i++) 
	  { 
		 second_number += pre_second_number[pre_second_length - i];
	  } 
	
	  short remainder = 0;
	  for (int i = 0; i < first_number.length(); i++) 
	  {
			short sum = int(first_number[i] - '0') + int(second_number[i] - '0') + remainder;
			result += (sum % 10 + '0');
			remainder = sum / 10;
	  }
	  for (int i = first_number.length(); i < second_number.length(); i++) 
	  {
			short sum = int(second_number[i] - '0') + remainder;
			result += (sum % 10 + '0');
			remainder = sum / 10;
	  }
	  if (remainder != 0)
	  {
			result += (remainder + '0');
	  }
	
	  string reversed_result;
	  int result_length = result.length();
	  for(int i = 1; i <= result_length; i++) 
	  { 
		 reversed_result += result[result_length - i];
	  } 
	
	  return strdup(reversed_result.c_str());
 }