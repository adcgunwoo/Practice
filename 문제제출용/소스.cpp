#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, j,a[6][6]={{0}};
	
	for (i = 1; i <6; i++) {
		a[i][1] = 1;
		for (j = 1; j < 6; j++) {
			a[1][j] = 1;
		}
	}
	for (i = 2; i < 6; i++) {
		for (j = 2; j < 6; j++) {
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}

	for (i = 1; i < 6; i++) {
		for (j = 1; j < 6; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}