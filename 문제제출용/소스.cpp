#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, fibo[100]={0,1,1,};

	for (i = 3; i <= 40; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	printf("�Ǻ���ġ ���� 10�� : %d\n", fibo[10]);
	printf("�Ǻ���ġ ���� 20�� : %d\n", fibo[20]);
	printf("�Ǻ���ġ ���� 30�� : %d\n", fibo[30]);
	printf("�Ǻ���ġ ���� 40�� : %d\n", fibo[40]);


	return 0;
}