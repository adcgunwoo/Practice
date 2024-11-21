#define _crt_no_secure_warnings
#include <stdio.h>

int main()
{
	int n, i, j, a[11][11]={{0}};
	a[1][1] = 1;

	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}

	for (i = n; i >=1 ; i--) {
		for (j = i; j >= 1; j--) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}