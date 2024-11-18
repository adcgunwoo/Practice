#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,a,b;
	double sum=0,avg[6] = { 85.6,79.5,83.1,80.0,78.2,75.0 };
	

	scanf("%d %d", &a, &b);
	sum = avg[a - 1] + avg[ b - 1 ];

	printf("%.1lf", sum);

	return 0;
}