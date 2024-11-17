#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a, i, j, k;

	for (i = 4,j=1; i >= 0; i--,j+=2) {
		for (k = 1; k <= i; k++) {
			printf(" ");
		}
		for (k = 1; k <= j; k++) {
			printf("*");
		}
		printf("\n");
	} //연습문제 5-1

	return 0;
}