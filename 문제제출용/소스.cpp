#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i, min, a[10];

	min = 1001;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		
		if (a[i] < min) {
			min = a[i];
		}
	}
	printf("%d", min);
	return 0;
}