#define _crt_secure_no_warnings
#include <stdio.h>

int main()
{

	int a;
	double b;

	a = 5;
	b = 3.140000;

	printf("%s = %d * %d * %lf = %lf\n", "����",a, 2, b, a * 2 * b);
	printf("%s = %d * %d * %lf = %lf\n", "����",a, a, b, a * a * b);


	return 0;

}