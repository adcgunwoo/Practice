#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i, j, a;
	int sum = 0, cnt = 0;
	int avg;

	for (i = 1; i <= 20; i++) {
		scanf("%d", &a);
		if (a == 0) {
			break;	
		}
		sum += a;
		cnt++;	
	}
	avg = sum / cnt;
	printf("%d %d", sum, avg);
	return 0;
}