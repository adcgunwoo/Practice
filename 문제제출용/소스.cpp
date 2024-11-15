#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,a;

	int cnt3 = 0,cnt5=0;

	for (i = 1; i <= 10; i++) {
		scanf("%d", &a);
		if (a % 15 == 0) {
			cnt3++;
			cnt5++;
		}
		else if (a % 3 == 0) {
			cnt3++;
		}
		else if (a % 5 == 0) {
			cnt5++;
		}
	}
	printf("Multiples of 3 : %d\n", cnt3);
	printf("Multiples of 5 : %d\n", cnt5);

	return 0;
}