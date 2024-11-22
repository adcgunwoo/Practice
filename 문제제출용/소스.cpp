#define _crt_no_secure_warnings
#include <stdio.h>
void input(int& x, int& y)
{
	scanf("%d %d", &x, &y);
}
void change(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
void output(int& x, int& y)
{
	for (int i = x; i <= y; i++) {
		printf("== %ddan ==\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %2d\n", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int a, b;
	input(a,b);
	if (a > b) {
		change(a, b);
	}
	output(a, b);
	return 0;
}
