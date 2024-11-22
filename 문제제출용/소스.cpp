#define _crt_no_secure_warnings
#include <stdio.h>
void gyesan(int& x, int& y);
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	gyesan(a, b);

	printf("%d %d", a, b);
	return 0;
}
void gyesan(int& x, int& y)
{
	if (x > y) {
		x=x / 2;
		y=y * 2;
	}
	else {
		x=x * 2;
		y=y / 2;
	}

}

