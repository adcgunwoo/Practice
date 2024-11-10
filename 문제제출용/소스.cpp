#define _crt_secure_no_warnings
#include <stdio.h>

int main()
{

	double x, y;

	x = 1.2340;
	y = 10.3459;

	printf("전체 7자리로 맞추고 소수 4자리까지 출력\n");
	printf("%c = %7.4lf\n", 'x', x);
	printf("%c = %7.4lf\n\n", 'y', y);
	printf("소수 2자리까지 출력(반올림)\n");
	printf("%c = %.2lf\n", 'x', x);
	printf("%c = %.2lf\n", 'y', y);

	return 0;

}