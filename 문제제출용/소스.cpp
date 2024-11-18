#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i,a[10], max=1, min=10000;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		if (a[i] >= 100) {
			if (a[i] < min) {
				min = a[i];
			}	
		}
		else if (a[i] > max) {
				max = a[i];
		}
	}

	printf("%d %d", max, min);
	return 0;
}