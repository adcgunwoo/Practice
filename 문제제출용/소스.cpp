#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,j, n;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			printf("%d ", i);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}