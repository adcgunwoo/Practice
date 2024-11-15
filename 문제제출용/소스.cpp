#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,j,n,m;
	int sum = 0;
	double avg;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		sum += m;
	}
	avg = double(sum) / n;

	printf("%.2lf", avg);

	return 0;
}