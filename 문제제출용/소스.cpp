#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i,j,k,a[100],tmp;
	for (i = 0; i < 100; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 999) {
			break;
		}
	}

	for (j = 0; j < i - 1; j++) {
		for (k = j+1; k < i; k++) {
			if (a[j] < a[k]) {
				tmp = a[j];
				a[j] = a[k];
				a[k] = tmp;
			}
		}
	}
	
	printf("max : %d\n", a[0]);
	printf("min : %d\n", a[i-1]);

	return 0;
}