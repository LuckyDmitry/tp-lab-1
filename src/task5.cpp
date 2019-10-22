#include "task5.h"
#include <malloc.h>
#include <string.h>
#include <cstddef>
#include <cstdlib> 

void split(char ***result, int *N, char *buf, char ch)
{
	const char *s = &ch;
	int len;
	int size = strlen(buf);

	for (int i = 0; i < size; i++)
	{
		if (buf[i] == ch)
		{
			(*N)++;
		}
	}

	char * pch = strtok(buf, s);

	*result = (char**)malloc(sizeof(char*) * ((*N) + 1));

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
