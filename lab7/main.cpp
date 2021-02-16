#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ltoao.h"

int main() {
	char str[81];
	str[80] = '\0';

    long num;

	printf("Input number: ");
    long sf_res = scanf("%ld", &num);

    if (sf_res == 0) {
        char c;
        if (1 == scanf("%c", &c)) {
            printf("Ignored incorrect input \"%c\"\n", c);
            return 1;
        }
    }

	ltoao(num, str);

    return 0;
}