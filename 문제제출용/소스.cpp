#define _crt_no_secure_warnings
#include <stdio.h>
int sum(int x, int y);
int min(int x, int y);
int main()
{
	int i, a, b,add;
	scanf("%d %d", &a, &b);
	
	printf("두 수의 합 = %d\n", sum(a,b));
	printf("두 수의 차 = %d\n", min(a,b));
}
int sum(int x, int y)
{
	return x + y;
}
int min(int x, int y)
{
	if (x - y > 0) {
		return x - y;
	}
	else if (x - y < 0) {
		return -x + y;
	}
}