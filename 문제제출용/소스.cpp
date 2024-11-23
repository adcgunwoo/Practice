#define _crt_no_secure_warnings
#include <stdio.h>
void input(int &x,int &y)
{
	scanf("%d %d", &x, &y);
}
void imput(double &x,double &y)
{
	scanf("%lf %lf", &x, &y);
}
void output(int& m, double& n)
{
	printf("두 정수의 차 : %d\n", m);
	printf("두 실수의 차 : %lf\n", n);
}
void sort(int& x, int& y, double& q, double &w)
{
	int min = x - y;
	if (min < 0) min *= -1;
	double nus = q - w;
	if (nus < 0) nus *= -1;
	output(min, nus);
}
int main()
{
	int a, b;
	double c, d;
	input(a, b);
	imput(c, d);
	sort(a, b, c, d);
	return 0;
}