#define _crt_no_secure_warning
#include <stdio.h>

int main()
{
	int a, b;
	int result1, result2, result3, result4;

	scanf("%d %d", &a, &b);

	result1 = (a && b);
	result2 = (a || b);

	printf("%d %d", result1, result2);

	return 0;
}