#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,j;
	
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 4; j++) {
			printf("%d * %d = %2d   ", j,i,j*i);
		}
		printf("\n");
	}

	return 0;
}