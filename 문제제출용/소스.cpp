#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a;
	int cnt = 0,sum=0;
	double avg=0;

	while (1) {
		scanf("%d", &a);
		if (a == 0) {
			printf("입력된 자료의 개수 = %d\n", cnt);
			printf("입력된 자료의 합계 = %d\n", sum);
			printf("입력된 자료의 평균 = %.2lf\n", avg);
			break;
		}
		cnt++;
		sum += a;
		avg = sum / double(cnt);
	}



	return 0;
}