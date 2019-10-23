unsigned long findValue(unsigned int min, unsigned int max)
{
	unsigned long number = max;
	unsigned int i = 1;
	while (i < max)
	{
		if (number % i == 0) i++;
		else
		{
			number++;
			i = 1;
		}
	}
	return number;
}