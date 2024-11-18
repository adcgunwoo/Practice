#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,j;
	char a[100];

	for (i = 0; i < 100; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			break;
		}
	}
	j = i;
	for (i = 0; i < j; i++) {
		if (i % 2 != 0) {
			printf("%d ", a[i]);
		}
	}

	return 0;
}