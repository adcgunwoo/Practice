#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
//#include <stdlib.h>

int main()
{
	double area;
	double b,c;
	printf("정사각형의 넓이 : ");
	scanf("%lf", &area);
	printf("정사각형의 한 변의 길이 : %lf\n", sqrt(area));
	printf("밑과 지수 : ");
	scanf("%lf %lf", &b, &c);
	printf("%lf의 %lf승은 %lf입니다.", b, c, pow(b, c));

	return 0;
}