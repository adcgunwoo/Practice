#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,j, n;
	
	for (i = 2; i <= 6; i++) {
		for (j = i; j <= i+4; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}