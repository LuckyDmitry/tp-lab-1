unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned nok = max;
	bool fl = 1;
	while (fl)
	{
		fl = 0;
		for (unsigned i = min; i < max; i++)
		{
			if (nok % i != 0)
			{
				fl = 1;
			}
		}
		if (fl == 1)
		{
			nok = nok + max;
		}
	}
	return nok;
}
