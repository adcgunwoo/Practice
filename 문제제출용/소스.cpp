#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a, i, j, k;
	scanf("%d", &a);
	
	for (i = a; i >= 1; i--) {
		for (j = i; j < a; j++) {
			printf(" ");
		}
		for (j = 2*i-1; j >=1; j--) {
			printf("*");
		}
		printf("\n");
	}


	 

	return 0;
}