#define _crt_no_secure_warnings
#include <stdio.h>
int output(int &x, int &y)
{
	int n = x*x-y*y;
	if (n < 0) {
		n *= -1;
	}
	return n;
}
int main()
{
	int a, b;
	scanf("%d %d", &a,&b);
	printf("%d", output(a, b));

	return 0;
}
