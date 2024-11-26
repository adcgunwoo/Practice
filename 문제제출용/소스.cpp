#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	char arr[100]="jungol olympiad";
	int a[5],i;
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%c", arr[a[i]]);
	}

	return 0;
}
