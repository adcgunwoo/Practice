#define _crt_no_secure_warnings
#include <stdio.h>
#include <stdlib.h> //atoi, atof �Լ��� ����ϱ� ���� ����
int main()
{   
	char a[20];
	scanf("%s", a);

	printf("%d\n", atoi(a)*2);
	printf("%.2lf\n", atof(a));

	return 0;
}