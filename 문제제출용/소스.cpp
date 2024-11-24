#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
//#include <stdlib.h>
void input(double x[], int y)
{
	for (int i = 0; i < y; i++) {
		scanf("%lf", &x[i]);
	}
}
void sort(double q[], int w)
{
	for (int i = 0; i < w - 1; i++) {
		for (int j = i + 1; j < w; j++) {
			if (q[i] < q[j]) {
				double tmp = q[i];
				q[i] = q[j];
				q[j] = tmp;
			}
		}
	}
}
void output(double m[],int n)
{
	printf("%.0lf ", ceil(m[0]));
	printf("%.0lf ", floor(m[2]));
	printf("%.0lf ", round(m[1]));
}
int main()
{
	double a[3];	
	input(a, 3);
	sort(a, 3);
	output(a, 3);
	return 0;
}