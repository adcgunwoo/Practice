#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
//#include <stdlib.h>

int main()
{
	double area;
	double b,c;
	printf("���簢���� ���� : ");
	scanf("%lf", &area);
	printf("���簢���� �� ���� ���� : %lf\n", sqrt(area));
	printf("�ذ� ���� : ");
	scanf("%lf %lf", &b, &c);
	printf("%lf�� %lf���� %lf�Դϴ�.", b, c, pow(b, c));

	return 0;
}