#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i,a[10],even_max=0,odd_min=0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0) {
			if (a[i] > even_max) {
				even_max = a[i];
			}
		}
		else if (a[i] % 2 != 0) {
			if (a[i] < odd_min) {
				odd_min = a[i];
			}
		}
	}

	printf("%d %d", odd_min, even_max);

	return 0;
}