#define _crt_no_secure_warnings
#include <stdio.h>
void change1(int x, int y);
void change2(int &x, int &y);
int main()
{
	int a, b;
	printf("두 수를 입력하세요. ");
	scanf("%d %d", &a, &b);
	change1(a, b);
	printf("첫 번째 함수 실행후 a = %d, b = %d\n", a,b);
	change2(a, b);
	printf("두 번째 함수 실행후 a = %d, b = %d\n", a,b);
	
	return 0;
}
void change1(int x, int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
	
	printf("첫 번째 함수 실행중 x = %d, y = %d\n", x, y);
}
void change2(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;

	printf("두 번째 함수 실행중 x = %d, y = %d\n", x, y);
}

