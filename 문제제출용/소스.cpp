#define _crt_no_secure_warnings
#include <stdio.h>
void output(int x)
{
	int n;
	for (int i = 1; i <= x; i++) {
		for (int j = i; j <= i*x; j+=i) {
			printf("%d ", j);
		}
		printf("\n");
	}
}
int main()
{
	int a;
	scanf("%d", &a);
	output(a);

	return 0;
}
