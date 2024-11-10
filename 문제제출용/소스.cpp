#define _crt_secure_no_warnings
#include <stdio.h>

int main()
{

	double x, y;

	x = 91.44;
	y = 2.54;

	printf("%4.1lf%s = %5.1lf%s\n", 2.1,"yd", 2.1*x,"cm");
	printf("%4.1lf%s = %5.1lf%s\n", 10.5, "in", 10.5 * y, "cm");
	return 0;

}