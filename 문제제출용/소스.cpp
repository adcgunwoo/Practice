#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i, j, a,num=0;
	scanf("%d", &a);

	char alpha = 'A';

	for (i = 1; i <= a; i++) {
		for (j = a; j >= i; j--) {
			printf("%c ", alpha++);
		}
		for (j = 1; j < i; j++) {
			printf("%d ", num++);
		}
		printf("\n");
	}

	return 0;
}