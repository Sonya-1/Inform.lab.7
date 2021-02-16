#include <stdio.h>
#include <string.h>

void ltoao(long nums, char* s) {
	unsigned long num = nums;
	char symb[] = "01234567";
	int len = 0, rem, i = 0, k = 0, j = 0;
	
	len = strlen(s);

	for (int e = 0; e < len; e++) {
		s[e] = ' ';
	}

	while (num != 0) {
		rem = num % 8;
		num = num / 8;
		s[len - 1 - i] = symb[rem];
		i++;
	}

	for (j = 0; s[j] != '\0'; j++) {
		if (s[j] != ' ') {
			
			s[k] = s[j];
			k++;
		}
	}
	s[k + 1] = '\0';

	printf("%s\n", s);
}
