#include "task4.h"

int main() 
{
	int i = 0;
	char *line1 = "10593678152314";
	char *line2 = "5691445992173545";

	char *result = sum(line1, line2);

	while (line1[i] != '\0')
	{
		cout << line1[i];
		i++;
	}
	cout << "\n+\n";
	i = 0;
	while (line2[i] != '\0')
	{
		cout << line2[i];
		i++;
	}
	cout << "\n________________\n";

	i = 0;
	while (result[i] != '\0')
	{
		cout << result[i];
		i++;
	}
	system("pause");
}