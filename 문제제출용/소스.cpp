#define _crt_no_secure_warning
#include <stdio.h>

int main()
{
	int a, b, c;
	int result1, result2, result3, result4;

	a = 0, b = 1, c = 2;

	result1 = (a && b);
	result2 = (a || b);
	result3 = (b && c);
	result4 = (!a);

	printf("%d %d %d %d", result1, result2, result3, result4);

	return 0;
}