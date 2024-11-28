#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	char a[50], b[50] = { "Hong Gil Dong" };
	strcpy(a, b);

	printf("%s", a);

	return 0;
}