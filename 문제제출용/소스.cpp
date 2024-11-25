#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
int output(int x)
{
	if (x < 1) return 1;
	return x * output(x - 1);
}
int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", output(N));

	return 0;
}

