#include "task5.h"
#include <string>
#include <vector>
#include <iostream>
#include <string.h>
using namespace std;

void split(char ***result, int *N, char *buf, char ch) 
{
	
string buffer(buf);
vector<string> pre_result;
int end_string = 0;
	
while (buffer.find(ch, end_string) != string::npos) 
{
end_string = (int)buffer.find(ch);
pre_result.insert(pre_result.end(), buffer.substr(0, end_string));
buffer = buffer.substr(end_string + 1);
}
	
pre_result.insert(pre_result.end(), buffer);
*N = (int)pre_result.size();
*result = new char*[pre_result.size()];
for (int i = 0; i < *N; i++) 
{
char *temp = new char[pre_result[i].size()];
strcpy(temp, pre_result[i].c_str());
(*result)[i] = temp;
}
	
return;
	
}
