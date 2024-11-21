#define _crt_no_secure_warnings
#include <stdio.h>

int main()
{
	int i, j, /*int */ a[7][7] = {{0}};

	a[1][1] = 1; 
	a[1][3] = 1; 
	a[1][5] = 1;

	for (i = 2; i < 6; i++) {
		for (j = 1; j < 6; j++) {
			a[i][j] = a[i-1][j-1]+a[i-1][j+1];
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