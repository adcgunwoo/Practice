#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,a[10];
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	printf("%d %d %d", a[2], a[4], a[9]);

	return 0;
}