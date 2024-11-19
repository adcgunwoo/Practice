#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, j,a[10],tmp;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (a[i] < a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}