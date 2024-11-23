#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void sort(int &a, int &b)
{
	if (abs(a) > abs(b)) {
		printf("%d\n", a);
	}
	else printf("%d\n", b);
}
void soort(double& q, double& w)
{
	if (fabs(q) > fabs(w)) {
		printf("%.2lf\n", w);
	}
	else printf("%.2lf\n", q);

}
int main()
{
	int a,b;
	double c, d;
	scanf("%d %d", &a, &b);
	scanf("%lf %lf", &c, &d);
	sort(a, b);
	soort(c, d);
	return 0;
}