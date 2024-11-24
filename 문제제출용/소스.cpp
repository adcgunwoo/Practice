#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
void sort(double& x, double& y);
void input(double &x, double &y)
{
	scanf("%lf %lf", &x, &y);
	if (x > y) {
		double z = x;
		x = y;
		y = z;
	}
	sort(x, y);
}
void output(int x)
{
	printf("%d", x);
}
void sort(double& x, double& y)
{
	int i,j,c;
	i = sqrt(x);
	if (sqrt(x) == int(sqrt(x))) {
		i -= 1;
	}
	j= sqrt(y);
	c = i - j;
	c *= -1;
	output(c);
}
int main()
{
	double a, b;
	input(a, b);
	return 0;
}