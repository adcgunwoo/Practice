#define _crt_no_secure_warnings
#include <stdio.h>
int a[51] = { 0,1,1, };
int	fibo(int x)
{
	if (a[x] == 0) a[x] = fibo(x - 1) + fibo(x - 2); //���� ������ �Ǻ���ġ ��� ����
	return a[x];//�޸������̼� : �̹� ���� ���� �� ���� ����
}
int main() 
{
	int N;
	scanf("%d", &N);
	printf("%d", fibo(N));
	
	return 0;
}
