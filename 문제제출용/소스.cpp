#define _crt_no_secure_warnings
#include <stdio.h>
void input(int& x, int& y)
{
	printf("두 수를 입력하세요. ");
	scanf("%d %d", &x, &y);
}
int plus(int& x, int& y)
{
	return x + y;
}
int mul(int& x, int& y)
{
	return x * y;
}
void output(int& x, int& y)
{
	printf("합 : %d\n", x);
	printf("곱 : %d\n", y);
}
int main()
{
	int a, b;
	input(a,b);
	int hap = plus(a, b);
	int gop = mul(a, b);
	output(hap, gop);
	return 0;
}
