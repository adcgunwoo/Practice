#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a,avg;
	int cnt = 0, sum = 0;
	
	do {
		scanf("%d", &a);
		if (a % 2 != 0) {
			sum += a;
			cnt++;
		}
	} while (a != 0);
	avg = sum/cnt;
	printf("Ȧ���� �� = %d\n", sum);
	printf("Ȧ���� ��� = %d", avg);

	return 0;
}