#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, n;

	scanf("%d", &n);
	int a[100] = { 100,n, }, tmp;
	for (i = 2; i < 100; i++) {
		a[i]=a[i-2] - a[i-1];
	}
	
	for (i = 0; i < 100; i++) {
		printf("%d ", a[i]);
		if (a[i] < 0) {
			break;
		}
	}
	

	return 0;
}