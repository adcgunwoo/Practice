#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
//#include <stdlib.h>

int main()
{

	double radius, area, pi = 3.14;
	printf("���� ������ : ");
	scanf("%lf", &radius);
	area = pow(radius, 2) * pi;
	printf("���� ����\n");
	printf("���� : %.0lf\n", floor(area));
	printf("�ݿø� : %.0lf\n", round(area));
	printf("�ø� : %.0lf\n", ceil(area));

	return 0;
}