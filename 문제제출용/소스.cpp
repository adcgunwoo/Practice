#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a, i, j, k;

	for (i = 1; i <= 5; i++) {
		for (j = i; j < 5; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; j++) {
			printf("*");
		}
		printf("\n");
	} //연습문제 5-1

	return 0;
}