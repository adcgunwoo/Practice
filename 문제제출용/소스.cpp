#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,sum=0, j,a;
	scanf("%d", &a);

	for (i = 1;; i++) {
		sum += i;
		if (sum > a) {
			printf("%d %d", i, sum);
			break;
		}
	}
	

	return 0;
}