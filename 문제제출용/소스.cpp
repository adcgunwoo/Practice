#define _crt_no_secure_warnings
#include <stdio.h>
int a[100] = { 0,1, };
int sort(int x)
{          //          sort로 해야 됨 a[x] 아니야!!! 
	if (a[x]==0) a[x]= sort(x/2) +sort(x-1);
	return a[x];
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", sort(n));
	return 0;
}
