#define _crt_no_secure_warnings
#include <stdio.h>
int a, b;
int sum , mul;
void question()
{
	printf("두 수를 입력하세요. ");
}
void input()
{
	scanf("%d %d", &a, &b);
}
void gyesan()
{
	sum = a + b;
	mul = a * b;
}
void output()
{
	printf("합 : %d\n", sum);
	printf("곱 : %d\n", mul);
}
int main()
{
	question();
	input();
	gyesan();
	output();
	return 0;
}
