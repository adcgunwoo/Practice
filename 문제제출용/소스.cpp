#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i, j,a;

	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = a-i; j >= 1; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}