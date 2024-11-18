#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i, j, a;
	int num = 1;
	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= a; j++) {
			printf("%d ", num);
			num += 2;
			if (num > 10) {
				num = 1;
			}
		}
		printf("\n");
	}
	


	return 0;
}