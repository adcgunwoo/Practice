#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i, j, a;

	int num = 1;
	char alpha = 'A';

	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= i; j++) {
			printf("%c ", alpha++);
		}
		for (j = 4; j >= i; j--) {
			printf("%d ", num++);
		}
		printf("\n");
	}

	return 0;
}