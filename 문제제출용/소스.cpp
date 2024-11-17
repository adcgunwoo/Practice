#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,j,a;

	scanf("%d", &a);

	for (i = 1; i <= 100; i++) {
		printf("%d ", a * i);
		int base = a * i;
		if (base % 10 == 0) {
			break;
		}
	}


	return 0;
}