#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i, a[5];

	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4], a[5]);
	
	return 0;
}