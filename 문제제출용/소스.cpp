#define _crt_no_secure_warnings
#include <stdio.h>
void area(int a);
int main()
{
	int r;
	scanf("%d", &r);
	area(r);

	return 0;
}
void area(int a)
{
	printf("%.2lf", a * a * 3.14);
}

