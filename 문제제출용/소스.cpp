#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
//#include <stdlib.h>
int main()
{
	double ci,radius;
	const double pi = 3.14;
	scanf("%lf", &radius);
	ci = 2 * radius * pi;
	printf("%.2lf", ci);

	return 0;
}