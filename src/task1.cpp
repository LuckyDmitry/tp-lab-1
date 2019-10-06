#include "task1.h" 

int nok(int a, int b)
{
	int na = a, nb = b;
	int nod, nok;
	while (a) {
		int t;
		if (b > a) 
		{ 
			t = a;
			a = b;
			b = t;
		}
		a %= b;
	}
	nod = b;
	nok = (na*nb)/nod;
	return nok;
}

unsigned long findValue(unsigned int min, unsigned max){
	int val = min;
	for (int i = min; i < max - 1; i++){
		val = nok(val, i + 1);
	}
	return val;
}