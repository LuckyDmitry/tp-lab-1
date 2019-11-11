#include "task5.h"

int main()
{
	char *buf = "111>222>333>444>555";
	char **result = NULL;
	int N = 0;
	
	split(&result, &N, buf, '>');
	for (int i = 0; i < N; i++) {
		cout << result[i] << endl;
	}
	system("pause");
	return 0;
}