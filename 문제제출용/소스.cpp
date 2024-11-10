#define _crt_no_secure_warning
#include <stdio.h>

int main()
{
	int a,b,c;

	scanf("%d %d", &a, &b);

	a = ++a;
	c = a + b--;

	printf("a = %d, b = %d, c = %d", a, b, c);
	
	return 0;
}