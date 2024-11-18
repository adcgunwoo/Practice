#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i, j, a,num=1;
	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = 1; j < i; j++) {
			printf("  "); //공백이 2개
		}
		for (j = i; j <= a; j++) {
			printf("%d ", num++);
		}
		printf("\n");
	}

	return 0;
}