#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <cstdlib> 
#include <cstddef>

void split(char ***result, int *N, const char *buf, char ch)
{
	const char *s = &ch;
	int len;
	char *buf1 = (char*)malloc(strlen(buf));
	strcpy(buf1, buf);
	int size = strlen(buf);

	for (int i = 0; i < size; i++)
	{
		if (buf[i] == ch)
		{
			(*N)++;
		}
	}

	char * pch = strtok(buf1, s); 

	*result = (char**)malloc(sizeof(char*) * ((*N)+1));

	int i = 0;
	while (pch != NULL)                   
	{
		len = strlen(pch);

		*(*result + i) = (char*)malloc((len + 1) * sizeof(char));
		memset(*(*result + i), 0, (len + 1) * sizeof(char));

		strncpy(*(*result + i), pch, len);

		pch = strtok(NULL, s);
		i++;
	}

} 
