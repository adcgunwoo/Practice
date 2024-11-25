#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
int output(int x)
{
	if (x == 0) return 0;
	return x%10+output(x/10);
}
int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", output(N));

	return 0;
}

