#define _crt_no_secure_warnings
#include <stdio.h>
int output(int &x)
{
	int sum = 0;
	for (int i = 1; i <= x; i++) {
		sum += i;
	}
	return sum;
}
int main()
{
	int a;
	scanf("%d", &a);
	int hap = output(a);
	printf("%d", hap);

	return 0;
}
