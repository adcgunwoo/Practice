#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	char a[202], b[202];
	int n;
	scanf("%s %s %d", a, b,&n);
	strcat(a, b);
	printf("%s\n", a);
	strncpy(b, a, n);
	printf("%s\n", b);

	return 0;
}