#define _crt_no_secure_warnings
#include <stdio.h>
int a[51] = { 0,1,1, };
int	fibo(int x)
{
	if (a[x] == 0) a[x] = fibo(x - 1) + fibo(x - 2); //값이 없으면 피보나치 계산 시작
	return a[x];//메모이제이션 : 이미 계산된 값은 더 하지 않음
}
int main() 
{
	int N;
	scanf("%d", &N);
	printf("%d", fibo(N));
	
	return 0;
}
