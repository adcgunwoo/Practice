#define _crt_no_secure_warnings
#include <stdio.h>
void change1(int x, int y);
void change2(int &x, int &y);
int main()
{
	int a, b;
	printf("�� ���� �Է��ϼ���. ");
	scanf("%d %d", &a, &b);
	change1(a, b);
	printf("ù ��° �Լ� ������ a = %d, b = %d\n", a,b);
	change2(a, b);
	printf("�� ��° �Լ� ������ a = %d, b = %d\n", a,b);
	
	return 0;
}
void change1(int x, int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
	
	printf("ù ��° �Լ� ������ x = %d, y = %d\n", x, y);
}
void change2(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;

	printf("�� ��° �Լ� ������ x = %d, y = %d\n", x, y);
}

