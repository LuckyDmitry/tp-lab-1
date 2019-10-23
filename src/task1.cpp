unsigned long findValue(unsigned int min, unsigned max) {
	int number = 1, flag = 1;
	while (flag) {
		flag = 0;
		for (unsigned i = min; i <= max; i++) {
			if (number % i != 0) {
				flag = 1;
				break;
			}
		}
		number+=1;
	}
	number-=1;
	return number;
}