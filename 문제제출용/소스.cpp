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
			printf("�Էµ� �ڷ��� ���� = %d\n", cnt);
			printf("�Էµ� �ڷ��� �հ� = %d\n", sum);
			printf("�Էµ� �ڷ��� ��� = %.2lf\n", avg);
			break;
		}
		cnt++;
		sum += a;
		avg = sum / double(cnt);
	}



	return 0;
}