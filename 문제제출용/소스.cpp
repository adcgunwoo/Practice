#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //atoi,atof �Լ��� ����ϱ� ���� ����
int main()
{   
	char a[101], b[101];
	int q, w;

	scanf("%s %s", a, b);
	q = atoi(a);
	w = atoi(b);

	printf("%d", q * w);

	return 0;
}