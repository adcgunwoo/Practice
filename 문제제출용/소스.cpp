#define _crt_no_secure_warnings
#include <stdio.h>
int a, b;
int sum , mul;
void question()
{
	printf("�� ���� �Է��ϼ���. ");
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
	printf("�� : %d\n", sum);
	printf("�� : %d\n", mul);
}
int main()
{
	question();
	input();
	gyesan();
	output();
	return 0;
}
