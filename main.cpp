#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "my_strtol.h"

int main() {

	char str[216], *end;
	int rad;
	printf("string: ");
	fgets(str, 216, stdin);
	
	printf("radix: ");
	scanf("%i", &rad);

	if (rad <= 1 || rad > 16) {
		printf("Incorrect radix\n");
		return 1;
	}

	long long num = my_strtol(str, rad);

	long long num1 = strtol(str, &end, rad);

	printf("my_strtol: %lld\n", num);
	printf("strtol: %lld\n", num1);

	return 0;
}
