#define _crt_no_secure_warnings
#include <stdio.h>

int main()
{
	double a, b; //실수형 변수
	int d, e;
	
	scanf("%lf %lf", &a, &b);

	d = a + b;

	int f, g;
	f = int(a);
	g = int(b);

	e = f + g;
	printf("%d %d", d, e);


	return 0;
}