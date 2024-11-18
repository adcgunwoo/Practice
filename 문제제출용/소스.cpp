#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i, max=0, a[10];


	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("%d", max);

	return 0;
}