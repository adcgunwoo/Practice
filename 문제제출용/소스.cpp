#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int c, i, j, a[5]={95,75,85,100,50};

	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (a[i] > a[j]) {
				c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}