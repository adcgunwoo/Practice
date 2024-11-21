#define _crt_no_secure_warnings
#include <stdio.h>

int main()
{
	int i,j,m, n, a[10]={0};

	scanf("%d %d", &m, &n);
	a[0] = m, a[1] = n;

	for (i = 2; i < 10; i++) {
		a[i] = a[i - 2] + a[i - 1];
		if (a[i] >= 10) {
			a[i] = a[i] % 10;
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}