#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
//#include <stdlib.h>

int main()
{
	int a;
	scanf("%d", &a);
	printf("%.2lf", sqrt(a / 3.14));

	return 0;
}