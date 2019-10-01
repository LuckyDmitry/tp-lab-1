void split(char ***result, int *N, char *buf, char ch) {
	*N = 0;
	int i = 0, num = 0;
	while (*(buf + i) != '\0') {
		if (*(buf + i) == ch) {
			num++;
		}
		i++;
	}
	i = 0;
	*N = num + 1;
	*result = new char*[num + 1];
	int dop = num + 1;
	for (int j = 0; j < dop; j++) {
		/*num = 0;
		while (*(buf + i) != '\0' && *(buf + i) != ch) {
			i++;
			num++;
		}*/
		num = 3;
		i += 3;
		*(*result + j) = new char[num + 1];
		*(*(*result + j)+num) = '\0';
		for (int k = 0; k < num; k++) {
			*(*(*result + j) + k) = *(buf + i - num + k);
		}
		i++;
	}
}