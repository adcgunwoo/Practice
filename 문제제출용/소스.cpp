#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	char a[5][20];
	int i,j;

	for (i = 0; i < 5; i++) {
		scanf("%s", a[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%s\n", a[i]);
	}

	return 0;
}