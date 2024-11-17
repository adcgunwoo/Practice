#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i, j, a,num=1;
	scanf("%d", &a);

	

	for (i = 1; i <= a; i++) {
		for (j = -2*i+2*a; j >= 1; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("%d ", num);
			num += 1;
		}
		num = 1;
		printf("\n");
	}

	return 0;
}