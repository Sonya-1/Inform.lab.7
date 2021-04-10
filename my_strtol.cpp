#include <string.h>
#include <stdio.h>
#include "my_strtol.h"

int my_strtol(char* str, int rad) {
	int n, len, negative = 0;
	long long num = 0;
	len = strlen(str);

	for (int i = 0; i < len - 1; i++) {
		if (str[i] == '-') {
			negative = 1;
			continue;
		}
		if (str[i] >= '0' && str[i] <= '9') {
			n = str[i] - '0';
		}
		else if (str[i] >= 'A' && str[i] <= 'F') {
			n = str[i] - 'A' + 10;
		}
		else if (str[i] >= 'a' && str[i] <= 'f') {
			n = str[i] - 'a' + 10;
		}
		else {
			return num;
		}
		if (n >= rad) {
			return num;
		}
		
		if (num > 2147483647) {
			return 2147483647;
		}

		num = num * rad + n;
	}

	if (negative == 1) {
		num = num * (-1);
	}

	return num;
}