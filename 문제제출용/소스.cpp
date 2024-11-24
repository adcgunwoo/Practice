#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
//#include <stdlib.h>

int main()
{

	double radius, area, pi = 3.14;
	printf("원의 반지름 : ");
	scanf("%lf", &radius);
	area = pow(radius, 2) * pi;
	printf("원의 넓이\n");
	printf("버림 : %.0lf\n", floor(area));
	printf("반올림 : %.0lf\n", round(area));
	printf("올림 : %.0lf\n", ceil(area));

	return 0;
}