#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,sum=0, j,a,odd_cnt=0;
	scanf("%d", &a);

	for (i = 1;; i++) {
		if (i % 2 != 0) {
			if (sum >= a) {
				printf("%d %d", odd_cnt, sum);
				break;
			}
			sum += i;
			odd_cnt++;
		}
	}

	return 0;
}