unsigned long findValue(unsigned int min, unsigned max) {
	int num = 1, flag = 1;
	while (flag) {
		flag = 0;
		for (unsigned i = min; i <= max; i++) {
			if (num % i != 0) {
				flag = 1;
				break;
			}
		}
		num++;
	}
	num--;
	return num;
}