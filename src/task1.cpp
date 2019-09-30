unsigned long findValue(unsigned int min, unsigned max)
{
	int k = max;
	int fl=1;
	while (fl == 1)
	{
		fl = 0;
		for (unsigned int i = min; i < max; i++)
		{
			if (k % i != 0)
			{
				fl = 1;
			}
		}
		if (fl == 1)
		{
			k = k + max;
		}
	}
	return k;
}
