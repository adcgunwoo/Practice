#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,a,b;
	int sum = 0,cnt=0;
	double avg = 0;

	scanf("%d %d", &a, &b);

	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}

	for (i = a; i <= b; i++) {
		if (i% 3 == 0 || i % 5 == 0) {
			sum += i;
			cnt++;
			avg = double(sum) / cnt;
		}
	}
	printf("sum : %d\n", sum);
	printf("avg : %.1lf\n", avg);


	return 0;
}