#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a = 10;
	int* p;
	scanf("%d", &a);
	p = &a;
	printf("%#p %d", p,*p);

	return 0;
}