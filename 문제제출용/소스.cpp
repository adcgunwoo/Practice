#define _crt_no_secure_warning
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	printf("%d\n", a++);
	printf("%d", ++a);

	return 0;
}