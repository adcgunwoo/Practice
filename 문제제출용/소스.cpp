#define _crt_no_secure_warnings
#include <stdio.h>

int main()
{
	int i, j,a[4][3],sum[4]={0};

	for (i = 0; i < 4; i++) {
		printf("%dclass? ", i + 1);
		for (j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
			sum[i] += a[i][j];
		}
	}
	for (i = 0; i < 4; i++) {
		printf("%dclass : ", i + 1);
		printf("%d\n", sum[i]);
	}
	return 0;
}