#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, fibo[100]={0,1,1,};

	for (i = 3; i <= 40; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	printf("피보나치 수열 10항 : %d\n", fibo[10]);
	printf("피보나치 수열 20항 : %d\n", fibo[20]);
	printf("피보나치 수열 30항 : %d\n", fibo[30]);
	printf("피보나치 수열 40항 : %d\n", fibo[40]);


	return 0;
}