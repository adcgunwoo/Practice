#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, j,a[3][3]={{3,5,4},{2,6,7},{8,10,1}};
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}