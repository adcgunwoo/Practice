#define _crt_no_secure_warnings
#include <stdio.h>
void sort(int x[], int y)
{
	for (int i = 2; i < y; i++) {
		x[i] = x[i - 2] + x[i - 1];
	}
}
void output(int x,int y[])
{
	printf("%d", y[x - 1]);
}
int main() 
{
	int N, a[51]={1,1,};
	scanf("%d", &N);
	sort(a,51);
	output(N,a);

	return 0;
}
