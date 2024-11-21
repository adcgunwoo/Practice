#define _crt_no_secure_warnings
#include <stdio.h>

int main()
{
	int i, j;
	char a[3][5];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			scanf(" %c", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%c ", a[i][j]+32);
		}
		printf("\n");
	}

	return 0;
}